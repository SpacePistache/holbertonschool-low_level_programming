#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written, total_written = 0;
char *buffer;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

while (total_written < bytes_read)
{
bytes_written = _putchar(buffer[total_written]);
if (bytes_written == -1)
{
free(buffer);
close(fd);
return (0);
}
total_written++;
}

free(buffer);
close(fd);
return (total_written);
}
