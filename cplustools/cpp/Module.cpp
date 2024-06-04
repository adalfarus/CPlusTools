#include <Python.h>
#include "DataFunctions.h"

// Wrapper function for isEven
static PyObject* py_isEven(PyObject* self, PyObject* args) {
    int num;
    if (!PyArg_ParseTuple(args, "i", &num)) {
        return NULL;
    }
    return PyBool_FromLong(cplustools::isEven(num));
}

// Wrapper function for isOdd
static PyObject* py_isOdd(PyObject* self, PyObject* args) {
    int num;
    if (!PyArg_ParseTuple(args, "i", &num)) {
        return NULL;
    }
    return PyBool_FromLong(cplustools::isOdd(num));
}

// Method definition object for this extension, exported to Python
static PyMethodDef MyMethods[] = {
    {"isEven", py_isEven, METH_VARARGS, "Determine if a number is even"},
    {"isOdd", py_isOdd, METH_VARARGS, "Determine if a number is odd"},
    {NULL, NULL, 0, NULL} // Sentinel
};

// Module definition
static struct PyModuleDef mymodule = {
    PyModuleDef_HEAD_INIT,
    "cplustools", // name of module
    "Python interface for the cplustools C++ library", // module documentation
    -1, // keeps state in global variables
    MyMethods
};

// Initializes the module
PyMODINIT_FUNC PyInit_cplustools(void) {
    return PyModule_Create(&mymodule);
}

