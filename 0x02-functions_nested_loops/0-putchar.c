#include "main.h"
#include <stdio.h>

/**
 * main - prints _putchar,
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	char ch[8];
	ch[0] = 95;
	ch[1] = 112;
	ch[2] = 117;
	ch[3] = 116;
	ch[4] = 99;
	ch[5] = 104;
	ch[6] = 97;
	ch[7] = 114; 
	
	for(int i = 0; i < 8; i++)
		putchar(ch[i]);
		
	putchar('\n');
	return (0);
}
