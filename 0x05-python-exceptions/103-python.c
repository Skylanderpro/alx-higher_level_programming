#include <Python.h>
#include <stdio.h>

/**
 *print_python_list - prints python lists
 *@p: python list objects
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, i;
	PyObject *element;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", Py_SIZE(p));
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	size = Py_SIZE(p);
	for (i = 0; i < size; ++i)
	{
		element = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(element)->tp_name);
	}
}

/**
 *print_python_bytes - prints python bytes
 *@p: python byte objects
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	char *string;

	printf("[.] bytes object info\n");

	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = PyBytes_Size(p);
	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", PyBytes_AsString(p));

	printf("  first %ld bytes: ", (size > 10 ? 10 : size));
	string = PyBytes_AsString(p);
	for (i = 0; i < size && i < 10; ++i)
	{
		printf("%02x", (unsigned char)string[i]);
		if (i != size - 1 && i != 9)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_python_float - prints python floats
 * @p: python float objects
 */
void print_python_float(PyObject *p)
{
	printf("[.] float object info\n");

	if (!PyFloat_Check(p))
	{
		printf("  [ERROR] Invalid Float Object\n");
		return;
	}

	printf("  value: %f\n", ((PyFloatObject *)p)->ob_fval);
}
