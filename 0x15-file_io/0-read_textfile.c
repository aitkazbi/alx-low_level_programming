#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read and  print it to STDOUT.
 * @filename: The text file .
 * @letters: Number of letters
 * Return: The actual number of letters it could read & print
 *        0 if filename is NULL & write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fid;
	ssize_t wr;
	ssize_t t;

	fid = open(filename, O_RDONLY);
	if (fid == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fid, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fid);
	return (wr);
}


