#include "main.h"


	/**
	 * main - check the code.
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    print_alphabet_x10();
	    return (0);
	}



=====================================


3-islower.c CODE


#include "main.h"


	/**
	 * _islower - check if char is lowercase
	 * @c: is the char to be checked
	 * Return: 1 if char is lowercase, otherwise 0.
	 */


	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	

