#include "main.h"

/**
 *  largest_number - returns the largest of 3 numbers
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
@@ -11,21 +11,19 @@
int largest_number(int a, int b, int c)

{
	int largest;

		int largest;

		if (a >= b && a >= c)
		{
	if (a >= b && a >= c)
	{
		largest = a;
		}
		else if (b >= a && b >= c)
		{
	}
	else if (b >= a && b >= c)
	{
		largest = b;
		}
		else
		{
	}
	else
	{
		largest = c;
		}
		return (largest);
	}
	return (largest);
}
