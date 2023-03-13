#include "main.h"
/**
 * *create_array- creates array
 * @size: number considered size of array
 * @c: charto fill array with
 * Return: always return pointer to array or null 
 */

 char *create_array(unsigned int size, char c)
 {
	 int i;

	 i = 0;

	 if ( size <= 0)
	 {
		 return (NULL);
	 }
	 else
	 {
		 char *p = (char*) malloc(size * sizeof(char));
		 for (int i = 0; i <size; i++)
			 p[i] = c;
		 return (p);
	 }
 }
