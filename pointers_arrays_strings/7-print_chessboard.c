#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: array name
 */

void *print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			char chessPiece = a[row][column];

			printf("%c", chessPiece);
		}
	}
}
