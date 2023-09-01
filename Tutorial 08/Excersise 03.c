#include <stdio.h>

// Function prototype to swap adjacent elements in an array
void swapArray(int motion[]);

int main(void)
{
    int motion[5], i;
    
    // Input values for the array
    for (i = 0; i < 5; i++)
    {
        printf("Enter the %d value: ", i + 1);
        scanf("%d", &motion[i]);
    }

    // Call the swapArray function to swap adjacent elements
    swapArray(motion);

    // Display the swapped array
    printf("\nAfter swapping:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", motion[i]);
    }

    return 0;
}

// Function to swap adjacent elements in an array
void swapArray(int motion[])
{
    int i, temp;

    for (i = 0; i < 4; i++)
    {
        // Swap adjacent elements
        temp = motion[i];
        motion[i] = motion[i + 1];
        motion[i + 1] = temp;
    }
}
