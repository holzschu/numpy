#ifndef _NPY_ARRAY_METHODS_H_
#define _NPY_ARRAY_METHODS_H_

#include "npy_import.h"

extern NPY_NO_EXPORT PyMethodDef array_methods[];


/*
 * Pathlib support, takes a borrowed reference and returns a new one.
 * The new object may be the same as the old.
 */
static inline PyObject *
NpyPath_PathlikeToFspath(PyObject *file)
{
#if !TARGET_OS_IPHONE
    static PyObject *os_PathLike = NULL;
    static PyObject *os_fspath = NULL;
#else
    static __thread PyObject *os_PathLike = NULL;
    static __thread PyObject *os_fspath = NULL;
#endif
    npy_cache_import("numpy.compat", "os_PathLike", &os_PathLike);
    if (os_PathLike == NULL) {
        return NULL;
    }
    npy_cache_import("numpy.compat", "os_fspath", &os_fspath);
    if (os_fspath == NULL) {
        return NULL;
    }

    if (!PyObject_IsInstance(file, os_PathLike)) {
        Py_INCREF(file);
        return file;
    }
    return PyObject_CallFunctionObjArgs(os_fspath, file, NULL);
}

#endif
