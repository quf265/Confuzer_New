#include "/usr/include/python3.8/Python.h" // Python/C API 헤더
#include <iostream>

int main() {
    // Initialize the interpreter
    Py_Initialize();

    // Import the module
    PyObject* module = PyImport_ImportModule("test_parsing");

    if (module == NULL) {
        std::cout << "Failed to import module.\n";
        return -1;
    }

    // Call the function
    PyObject* result = PyObject_CallMethod(module, "main", NULL);

    if (result == NULL) {
        std::cout << "Failed to call function.\n";
        return -1;
    }

    // Get the string value of the result
    const char* strResult = PyUnicode_AsUTF8(result);

    std::cout << strResult << std::endl;

    // Decrement the reference count of the objects
    Py_DECREF(module);
    Py_DECREF(result);

    // Close the interpreter
    Py_Finalize();

    return 0;
}
