/*
 ============================================================================
 Name        : TrabajoEntregar.c
 Author      : Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int array;
	int resultado;
	for (int i=0;i<5;i++)
	{
		int array[i];
	}


	if (maximoArrayInt (&array,5,resultado)==0)
	{
		printf("El maximo es: %d",resultado);
	}

	return EXIT_SUCCESS;
}
