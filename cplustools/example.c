#include <Python.h>
#include "example.h"
#include <stdio.h>

void greet() {
    printf("Hello from C!\n");
}

static PyMethodDef ExampleMethods[] = {
    {"greet", (PyCFunction)greet, METH_NOARGS, "Print a greeting from C"},
    {NULL, NULL, 0, NULL}   /* Sentinel */
};

static struct PyModuleDef examplemodule = {
    PyModuleDef_HEAD_INIT,
    "example",   /* name of module */
    NULL, /* module documentation, may be NULL */
    -1,       /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    ExampleMethods
};

PyMODINIT_FUNC
PyInit_example(void) {
    return PyModule_Create(&examplemodule);
}
