#include <main.h>
/**
 * main-entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
	char *sh ="Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	
	_putchar('\n');

	return (0);

}







}		
