#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * 
 * @n - number to print from to 98
 * 
 * Return: 0
 */

void print_to_98(int n) {
    if (n >= 98)
    {
        while (n > 98)
            printf("%d, ", n--);
        printf("%d\n", n);
    }

    else
    {
        while (n < 98)
            printf("%d, ", n++);
        printf("%d\n", n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    print_to_98(n);

    return 0;
}

