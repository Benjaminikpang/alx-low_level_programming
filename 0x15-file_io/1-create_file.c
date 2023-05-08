#include "main.h"
#include "string.h"

/**
* create_file - append to file
* @filename: file pointer
* @text_content: content
* @Return:-1 and read char
*/
int create_file(const char *filename, char *text_content)
{
	int ben, min;

	if (filename == NULL)
		return (-1);
	ben = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
