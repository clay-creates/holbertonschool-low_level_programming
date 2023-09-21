#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - start of program
*
* Return: returns 0 on command
*/


int main(void)
{
	int n;

	srand(time(0));
		n = rand() - RAND_MAX / 2;
		  if (n == 0){
		  printf("is zero");
		  }
		  elif (n > 1){
		  printf("is positive");
		  }
		  else {
		  printf("is negative");
		  }
		     return (0);
		     }