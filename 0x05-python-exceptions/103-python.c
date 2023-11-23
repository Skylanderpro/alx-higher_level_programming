#include <Python.h>
#include <stdio.h>

/**
 *print_python_list - prints python lists
 *@p: python list objects
 */
void print_python_list(PyObject *p)
{
	printf("[*] Python list info\n");

	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		return;
	}

	printf("[*] Size of the Python List = %ld\n", ((PyVarObject *)p)->ob_size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	Py_ssize_t size = ((PyVarObject *)p)->ob_size;
	for (Py_ssize_t i = 0; i < size; ++i)
	{
		PyObject *element = ((PyListObject *)p)->ob_item[i];
		printf("Element %ld: %s\n", i, element->ob_type->tp_name);
	}
}

/**
 * print_python_bytes - prints python bytes
 * @p: python byte objects
 */
void print_python_bytes(PyObject *p)
{
	printf("[.] bytes object info\n");

	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	printf("  size: %ld\n", ((PyVarObject *)p)->ob_size);
	printf("  trying string: %s\n", ((PyBytesObject *)p)->ob_sval);

	printf("  first %ld bytes: ", (((PyVarObject *)p)->ob_size > 10 ? 10 : ((PyVarObject *)p)->ob_size));
	for (Py_ssize_t i = 0; i < (((PyVarObject *)p)->ob_size > 10 ? 10 : ((PyVarObject *)p)->ob_size); ++i)
	{
		printf("%02x", (unsigned char)(((PyBytesObject *)p)->ob_sval[i]));
		if (i != (((PyVarObject *)p)->ob_size - 1) && i != 9)
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
