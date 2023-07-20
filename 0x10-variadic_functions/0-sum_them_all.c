#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
int main(void)
{
int sum1 = sum_them_all(3, 10, 20, 30);
int sum2 = sum_them_all(5, 1, 2, 3, 4, 5);

printf("Sum 1: %d\n", sum1);
printf("Sum 2: %d\n", sum2);
return (0);
}
