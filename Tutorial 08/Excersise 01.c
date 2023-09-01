#include <stdio.h>

int main(void)
{
    int marks[10], i = 0, preValmark;

    // Input marks for 10 students
    for (i = 0; i < 10; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &preValmark);

        // Check if the entered marks are within the valid range
        if (preValmark >= 0 && preValmark <= 20)
        {
            marks[i] = preValmark;
        }
        else
        {
            printf("Invalid Entry\n");
            return -1; // Exit the program with an error code
        }
    }
    
    // Display marks for all students
    for (i = 0; i < 10; i++)
    {
        printf("Mark of student %d is: %d\n", i + 1, marks[i]);
    }
    
    return 0; // Exit the program with success code
}
