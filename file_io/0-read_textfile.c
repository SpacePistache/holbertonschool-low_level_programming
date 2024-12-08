#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char buffer[BUFSIZ];

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
return (0);
}

bytes_written = 0;
while (bytes_written < bytes_read)
{
if (_putchar(buffer[bytes_written]) == -1)
{
close(fd);
return (0);
}
bytes_written++;
}


close(fd);

return (bytes_written);
}
