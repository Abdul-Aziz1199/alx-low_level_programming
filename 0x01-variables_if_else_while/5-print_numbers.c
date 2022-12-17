

#include <stdio.h>



/**
 *
 *  * main -prints all possible combinations of two tow-digit numbers,
 *
 *   * ranging from 0-99, separated by a comma followed by a space.
 *
 *    *
 *
 *     * Return: Always 0
 *
 *      * main - main block
 *
 *       * Description: Print all possible combinations of two two-digit numbers.
 *
 *        *  Numbers should range from 0 to 99.
 *
 *         *  The two numbers should be separated by a space.
 *
 *          *  All numbers should be printed with two digits. 1 should be printed as 01.
 *
 *           *  Combination of numbers must be separated by a comma followed by a space.
 *
 *            *  Combinations of numbers should be printed in ascending order.
 *
 *             *  `00 01` and `01 00` are considered as the same combination.
 *
 *              *   You can only use `putchar` to print to console.
 *
 *               *   You can only use `putchar` up to 8 times.
 *
 *                *   You are not allowed to use any variable of type `char`.
 *
 *                 *   Return: 0
 *
 *                  */



int main(void)

{

		int num1, num2;

		int x, y;



		for(num2 = num1 <= 98; num1++)

		for (x = 0; x < 100; x++)

		           {

											        for(num2 = num1 + 1; num2 <=99; num2++)

											         for (y = 0; y < 100; y++)

														{

																					                putchar((num1 / 10) + '0');

																							putchar((num1 % 10) + '0');

																							ptchar('');

																														                         putchar((num2 / 10) + '0');

																																	putchar(num2 % 10) + '0');



																																if(num1 == 98 && num2 == 99)

																																									      continue;



																																putchar(',');

																																										putchar('');

																																										if (x < y)

																						        {

												putchar((x / 10) + 48);

												putchar((x % 10) + 48);

												putchar(' ');

		 putchar((y / 10) + 48);
                                                                                                  putchar((y % 10) + 48);

												if (x != 98 || y != 99)

                           {

		putchar(',');

												 putchar(' ');
                                                                                                       }

																							}

												}

		putchar('\n');



		return(0);

		return (0);

}
