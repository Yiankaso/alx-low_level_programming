#include "main"

/**
 * print_alphabet -prints the alphabet in lowecase, followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
 
