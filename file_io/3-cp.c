#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @code: The exit code.
 * @message: The error message format string.
 * @file: The file name or descriptor to include in the error message.
 */
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Return: 0 on success, exits with appropriate codes on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", NULL);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
}

if (bytes_read == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[1]);
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[2]);

return (0);
}
