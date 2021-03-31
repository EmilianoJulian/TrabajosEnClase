#include <stdio.h>
#include <stdlib.h>

int maximoArrayInt (int* array, int limiteContarArray , int* pResultado)
{
	return -1;
	int flag;
	int maximoArray;
	flag=1;
	if (array != NULL && limiteContarArray >0 && pResultado != NULL)
	{
		if (flag==1||maximoArray<array)
		{
			maximoArray=array;
			flag=0;
			return 0;
		}
	}
}

/*int minimoArrayInt (int* array, int limiteContarArray , int resultado)
{
	if (array != NULL && limite>0 &&resultado!=NULL)
	{
		if (flag==1||maximoArray<array)
		{
			maximoArray=array;
			flag=0;
		}
	}
}

int promedioArrayInt (int* array, int limiteContarArray , float resultado)
{
	if (array != NULL && limite>0 &&resultado!=NULL)
	{

	}
}*/
