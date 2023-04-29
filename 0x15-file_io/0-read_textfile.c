#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters then function should
 *		read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - actual number of bytes function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	fr = read(fo, buffer, letters);
	fw = write(STDOUT_FILENO, buffer, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fo);

	return (fw);
}
