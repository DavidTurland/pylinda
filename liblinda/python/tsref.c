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

#include PYTHON_H

#include "linda.h"
#include "linda_python.h"

static PyObject* linda_TSRef_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    linda_TSRefObject* self;

    self = (linda_TSRefObject*)type->tp_alloc(type, 0);
    if (self != NULL) {
        self->ts = NULL;
    }

    return (PyObject*)self;
}

static int linda_TSRef_init(linda_TSRefObject* self, PyObject* args, PyObject* kwds)
{
    char* id = NULL;

    if(!PyArg_ParseTuple(args, "s", &id))
        return -1;

    self->ts = Minimal_tupleSpace(id);
    return 0;
}

static void linda_TSRef_dealloc(linda_TSRefObject* self)
{
    Linda_delReference(self->ts);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject* linda_TSRef_str(linda_TSRefObject* self) {
    if(self->ts != NULL) {
        return PyUnicode_FromFormat("<TSRef %s>", Minimal_getTupleSpace(self->ts));
    } else {
        return PyUnicode_FromFormat("<TSRef>");
    }
}

static PyObject* linda_TSRef_repr(linda_TSRefObject* self) {
    if(self->ts != NULL) {
        return PyUnicode_FromFormat("<TSRef %s>", Minimal_getTupleSpace(self->ts));
    } else {
        return PyUnicode_FromFormat("<TSRef>");
    }
}

static long linda_TSRef_compare(linda_TSRefObject* self, linda_TSRefObject* other) __attribute__((unused));
static long linda_TSRef_compare(linda_TSRefObject* self, linda_TSRefObject* other) {
    if(self->ts == NULL || other->ts == NULL) {
        PyErr_SetString(PyExc_TypeError, "Got null string in TSRef.");
        return -1;
    } else {
        return strcmp(Minimal_getTupleSpace(self->ts), Minimal_getTupleSpace(other->ts));
    }
}

static long linda_TSRef_hash(linda_TSRefObject* self) {
    long r;
    PyObject* s = PyUnicode_FromString(Minimal_getTupleSpace(self->ts));
    r = PyObject_Hash(s);
    Py_DECREF(s);
    return r;
}

static PyMethodDef tsref_methods[] = {
    /*{"_out", (PyCFunction)linda_TSRef_out, METH_VARARGS, "Places the given tuple into the Tuplespace."},*/
    {NULL}  /* Sentinel */
};

static PyObject* linda_TSRef_getid(linda_TSRefObject* self, void *closure)
{
    return PyUnicode_FromString(Minimal_getTupleSpace(self->ts));
}

static PyGetSetDef tsref_getseters[] = {
    {"_id", (getter)linda_TSRef_getid, (setter)NULL, "The Tuplespace id.", NULL},
    {NULL}  /* Sentinel */
};

PyTypeObject linda_TSRefType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "linda.TSRef",
    .tp_basicsize = sizeof(linda_TSRefObject),
    .tp_dealloc = (destructor)linda_TSRef_dealloc,
    .tp_repr = (reprfunc)linda_TSRef_repr,
    .tp_hash = (hashfunc)linda_TSRef_hash,
    .tp_str = (reprfunc)linda_TSRef_str,
    .tp_flags = Py_TPFLAGS_DEFAULT,
    .tp_doc = "A TupleSpace Reference",
    .tp_methods = tsref_methods,
    .tp_getset = tsref_getseters,
    .tp_init = (initproc)linda_TSRef_init,
    .tp_new = linda_TSRef_new,
};

void inittsref(PyObject* m) {
    linda_TSRefType.tp_new = PyType_GenericNew;
    if (PyType_Ready(&linda_TSRefType) < 0)
        return;

    Py_INCREF(&linda_TSRefType);
    PyModule_AddObject(m, "TSRef", (PyObject*)&linda_TSRefType);
}
