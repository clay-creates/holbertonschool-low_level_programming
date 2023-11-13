#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdin
 * @filename: name of file to read
 * @letters: number of letter to read and print
 *
 * Return: return actual number of letters read/printed, 0 on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz, i;
	char *c;

	fd = open(filename, O_RDONLY | O_CREAT);
	c = (char *)calloc(100, sizeof(char));

	if (fd == -1 || fd == NULL)
	{
		return (0);
	}

	sz = read(fd, c, letters);
	c[sz] = '\0';

	return (0);
}
