#include <Python.h>

/**
 * print_python_list_info - Prints information about a Python list
 * @p: PyObject representing a list
 */
void print_python_list_info(PyObject *p)
{
	int size, allocated, i;
	PyObject *item;

	/* Get the size and allocated memory of the list */
	size = PyList_Size(p);
	allocated = ((PyListObject *)p)->allocated;

	/* Print the list size and allocated memory */
	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", allocated);

	/* Iterate through list elements and print their types */
	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %d: %s\n", i, Py_TYPE(item)->tp_name);
	}
}
