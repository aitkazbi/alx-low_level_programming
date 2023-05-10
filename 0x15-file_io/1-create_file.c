#include "main.h"

/**
* create_file -Function thats creates a file.
* @filentame: A pointer the name of the file.
* @text_content: A pointer to a string to wrrite to the file.
*
* Return: -1 If filename is NULL.
*/
int create_file(const char *filentame, char *text_content)
{
int fid, wr, lent = 0;

if (filentame == NULL)
return (-1);

if (text_content != NULL)
{
for (lent = 0; text_content[lent];)
lent++;
}

fid = open(filentame, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(fid, text_content, lent);

if (fid == -1 || wr == -1)
return (-1);

close(fid);

return (1);
}


