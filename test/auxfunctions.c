/**
 *  _putchar - A function that prints a character.
 *@a: Character.
 *
 * Return: a integer.
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}