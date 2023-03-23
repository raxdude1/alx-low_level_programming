#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point for program execution
 * Description: Prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	  char ch;

	  for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	  putchar('\n');
return (0);
}
