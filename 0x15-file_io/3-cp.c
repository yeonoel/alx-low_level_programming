#include "main.h"

/**
 * main - program copie the content file in an other file
 * @argc: number of arguments
 * @argv: pointer to the argument list
 * Return: number of charactere copied
 */
int main(int argc, char *argv[])
{
int ffd, fd;
char *buf = malloc(sizeof(char *) * 1024);
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
ffd = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
if (ffd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (read(fd, buf, 1024) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (write(ffd, buf, 1024) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
exit(100);
}
if (close(ffd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", ffd);
exit(100);
}
return (ffd);
}
