#include <stdio.h>

int main(void)
{
    int array[10], i, j, n = 0;

    // Input array elements
    for (i = 0; i < 10; i++)
    {
        printf("Enter the array element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Print table header
    printf("\n%12s %19s %18s\n", "Element", "Value", "Histogram");

    for (j = 0; j < 10; j++)
    {
        printf("\n");
        printf("%10d", n);
        printf("%10s", "|");
        printf("%10d", array[j]);
        printf("%10s", "|");

        n += 1;

        // Create the histogram using asterisks
        for (i = 0; i < array[j]; i++)
        {
            printf("*");
        }
    }

    return 0;
}
