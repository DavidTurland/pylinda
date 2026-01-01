/*
*    Copyright 2006 Andrew Wilkinson <aw@cs.york.ac.uk>.
*
*    This file is part of LibLinda (http://www-users.cs.york.ac.uk/~aw/pylinda)
*
*    LibLinda is free software; you can redistribute it and/or modify
*    it under the terms of the GNU Lesser General Public License as published by
*    the Free Software Foundation; either version 2.1 of the License, or
*    (at your option) any later version.
*
*    LibLinda is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU Lesser General Public License for more details.
*
*    You should have received a copy of the GNU Lesser General Public License
*    along with LibLinda; if not, write to the Free Software
*    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "config.h"

#include <stdio.h>

#include PYTHON_H

#if (PY_VERSION_HEX < 0x02050000)
typedef int Py_ssize_t;
#define lenfunc inquiry
#define ssizeargfunc intargfunc
#endif

#include "linda_python.h"

static PyObject* linda_TypeMap_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    linda_TypeMapObject* self;

    self = (linda_TypeMapObject*)type->tp_alloc(type, 0);
    if (self != NULL) {
        self->map = NULL;
    }

    return (PyObject*)self;
}

static int linda_TypeMap_init(linda_TypeMapObject* self, PyObject* args, PyObject* kwds) {
    if(!PyArg_ParseTuple(args, ""))
        return -1;

    return 0;
}

static void linda_TypeMap_dealloc(linda_TypeMapObject* self) {
    if(self->map != NULL) {
        Linda_delReference((void*)(self->map));
    }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyGetSetDef typemap_getseters[] = {
    /* {"id", (getter)linda_Value_getid, (setter)NULL, "", NULL}, */
    {NULL}  /* Sentinel */
};

static Py_ssize_t linda_TypeMapLen(linda_TypeMapObject *self) {
    return Minimal_SyntaxMap_size(self->map->map);
}

static PyObject* linda_TypeMapSubScript(linda_TypeMapObject* self, PyObject* arg) {
    char* name;
    LindaValue v;

    if(!PyUnicode_Check(arg)) {
        PyErr_SetString(PyExc_TypeError, "Must be string");
        return NULL;
    }

    name = (char*)PyUnicode_AsUTF8(arg);

    v = Minimal_getName(self->map, name);
    if(v != NULL) {
        return Value2PyO(v);
    } else {
        return PyErr_Format(PyExc_IndexError, "Type name (%s) not found", name);
    }
}

PyMappingMethods linda_TypeMapMappingMethods = {
        (lenfunc)linda_TypeMapLen, /* lenfunc mp_length; */
        (binaryfunc)linda_TypeMapSubScript, /* binaryfunc mp_subscript; */
        0, /* objobjargproc mp_ass_subscript; */
};

static void find_names(struct Minimal_NameValueMap_t* map, PyObject* list) {
    if(map == NULL) {
        return;
    } else if(map->name != NULL) {
        PyList_Append(list, PyUnicode_FromString(map->name));
    }
    find_names(map->left, list);
    find_names(map->right, list);
}

static PyObject* linda_TypeMap_keys(linda_TypeMapObject* self) {
    PyObject* list = Py_BuildValue("[]");

    find_names(self->map->map, list);

    return list;
}

static PyMethodDef typemap_methods[] = {
    {"keys", (PyCFunction)linda_TypeMap_keys, METH_NOARGS, ""},
    {NULL}  /* Sentinel */
};

PyTypeObject linda_TypeMapType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "linda.TypeMap",
    .tp_basicsize = sizeof(linda_TypeMapObject),
    .tp_dealloc = (destructor)linda_TypeMap_dealloc,
    .tp_as_mapping = &linda_TypeMapMappingMethods,
    .tp_flags = Py_TPFLAGS_DEFAULT,
    .tp_doc = "A Linda Type Map",
    .tp_methods = typemap_methods,
    .tp_getset = typemap_getseters,
    .tp_init = (initproc)linda_TypeMap_init,
    .tp_new = linda_TypeMap_new,
};

void inittypemap(PyObject* m) {
    linda_TypeMapType.tp_new = PyType_GenericNew;
    if (PyType_Ready(&linda_TypeMapType) < 0)
        return;

    Py_INCREF(&linda_TypeMapType);
    PyModule_AddObject(m, "TypeMap", (PyObject*)&linda_TypeMapType);
}
