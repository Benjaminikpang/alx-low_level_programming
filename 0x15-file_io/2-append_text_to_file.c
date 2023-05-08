#include "main.h"
#include <string.h>
/**
 * append_text_to_file - create pointer file
 * @filename: file pointer
 * @text_content: content
 * @Return: returns 1 in success or -1 in failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ben;
	int min;

	if (filename == NULL)
		return (0);
	ben = open(filename, O_WRONLY | O_APPEND);
	if (ben == -1)
		return (-1);
	if (text_content != NULL)
	{
		min = write(ben, text_content, strlen(text_content));
		if (min == -1)
			return (-1);
	}
	close(ben);
	return (1);
}
