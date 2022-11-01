#include "main.h"

/**
 * _strspn _ gets the length of the prefix substring
 * @s: string
 * @accept: string containing the list of char to accept in match s
 * which consist only of bytes from accept
 */

unsigned int_strcpn(char *s, char *accept)
{
	int i, x, y, flag;

	y = 0;

	for (i = 0; s[i] != '\0';i++)
	{
		flag = 0;
	
		for (x = 0; accept[x] != 0; x++)
		{
			if (s[i] == accept[x])
			{
			y++;
			flag = 1;
			}
		}
		if (flag == 0)
		{
			return (y);
		}

	}
	return (0);
}
