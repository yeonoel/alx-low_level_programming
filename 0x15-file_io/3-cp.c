#include "main.h"

/**
 * main - program copie the content file in an other file
 * @argc: number of arguments
 * @argv: pointer to the argument list
 * Return: number of charactere copied
 */
int main(int argc, char **argv)
{

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(argv[1], argv[2]);

exit(0);
}


/**
 * copy_file - copy content file in other
 * @src: the the source to copy
 * @dest: the file who receive the content of the src file
 */
void  copy_file(const char *src, const char *dest)
{
int ffd, n, fd;
char buf[1024];

fd = open(src, O_RDONLY);
if (!src || fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
exit(98);
}

ffd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((n = read(fd, buf, 1024)) > 0)
{
if (write(ffd, buf, n) != n || ffd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
exit(99);
}
}
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
exit(98);
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
}
