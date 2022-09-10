#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
<<<<<<< HEAD
<<<<<<< HEAD
}
=======

}
>>>>>>> 8d6dcc0765d7dc2bf7ab36da68b59c796c67c0bd
=======
}
>>>>>>> 190c9d696febb1dc21e5ba4d9d830524dd35f1a6
