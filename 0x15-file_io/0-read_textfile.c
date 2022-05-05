#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads and prints it to the POSIX standard output
 * @filename: pointer to file
 * @letters: numbers of charcateres
 * Return: numbers of characteres.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, n;
char *buf = malloc(sizeof(char *) * letters);

if (filename == NULL || buf == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY, 0600);
if (fd == -1)
{
return (0);
}
n = read(fd, buf, letters);
write(STDOUT_FILENO, buf, n);
close(fd);
return (n);
}
