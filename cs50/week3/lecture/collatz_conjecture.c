#include <stdio.h>

int collatz(int n);

int main(void)
{
    printf("%i\n", collatz(27));
}

int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }

    if (n % 2  == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz((3 * n) + 1);
    }

}
