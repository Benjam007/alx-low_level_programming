xbase01
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x0B-malloc_free/0-create_array.c
@xbase01
xbase01 creat array
 1 contributor
22 lines (21 sloc)  435 Bytes
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array and initialize it
 * @size: size of array
 * @c: character
 * Return: returns a pointer if successful or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
return (NULL);
ptr = (char *) malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
