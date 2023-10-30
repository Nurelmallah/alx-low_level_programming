#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes text to it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the text to write to the file.
 *
 * Return: If the function fails or if filename is NULL - -1.
 * If the file does not exist the function should create it.
 * If text_content is NULL, create an empty file.
 * Otherwise - 1 (success).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
