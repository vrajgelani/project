#include <stdio.h>

int add(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int divide(int a, int b) 
{
    if (b != 0)
        return a / b;
    else 
	{
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int mod(int a, int b) 
{
    if (b != 0)
        return a % b;
    else 
	{
        printf("Error: Modulo by zero is not allowed.\n");
        return 0;
    }
}

int main() 
{
    int choice, a, b;

    while (1) 
	{
        // Display menu
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) 
		{
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        switch (choice) 
		{
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a, b));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, subtract(a, b));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, multiply(a, b));
                break;
            case 4:
                printf("Division of %d and %d is %d\n", a, b, divide(a, b));
                break;
            case 5:
                printf("Modulo of %d and %d is %d\n", a, b, mod(a, b));
                break;
            default:
                printf("Invalid choice! Please select from 0 to 5.\n");
        }
    }
}
/*
input/output:
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for the exit

enter your choice : 4
enter your first number:10
enter your second number :5
division of 10 and 5 is 2

press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for the exit

enter your choice : 0

*/
