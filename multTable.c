//Adam Haag
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Converts 2D array position  into continous heap address 
int getElement(int x, int y, int dim)
{
	return (dim * y + x);
}

/* printTable:	contains implementation for allocation of heap memory and
 *	printing multiplication table to the user*/ 
void printTable(int d)
{
	int* array;
	int dimension = d*d;
	int x, y;
	array = (int *)malloc(sizeof(int)*dimension); 
	for(x = 0; x < d; x++)
	{
		for(y = 0; y < d; y++)
		{
			//Set pieces of memory to correct value
			*(array + getElement(x, y, d)) = ((x + 1) * (y + 1));
			printf("%d\t", *(array + getElement(x, y, d)));
		}
		printf("\n");
	}
	free(array);
}

int main(int argc, char * argv[])
{
	//If no specifications given, use '10'
	if(argc <= 1)
	{
		printTable(10);
	}
	else
	{
		int i; //Value for holding choice given by user
		i = atoi(*(argv + 1));
		switch(i)
		{
			case 1:
				printTable(1);
				break;
			case 2:
				printTable(2);
				break;
			case 3:
				printTable(3);
				break;
			case 4:
				printTable(4);
				break;
			case 5:
				printTable(5);
				break;
			case 6:
				printTable(6);
				break;
			case 7:
				printTable(7);
				break;
			case 8:
				printTable(8);
				break;
			case 9:
				printTable(9);
				break;
			default:
				printTable(10);
				break;
		}
	}
	return 0;
}



