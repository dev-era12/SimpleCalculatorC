#include <stdio.h>

// Make Simple Calculator in C

// Prototype 4 Main Operation
float addition (float number1, float number2);
float subtracton (float number1, float number2);
float multipication (float number1, float number2);
float division (float number1, float number2);


int main()
{
    // define operation symbol variable
    char operation;
    // define first digit
    float integer1;
    // define second digit
    float integer2;
    // Getting operation symbol from user
    printf("Which operation do you want to use? *, -, +, /\n");
    scanf("%c", &operation);
    // Getting First digit
    printf("Enter First Digit: \n");
    scanf("%f", &integer1);
    // Getting Second digit
    printf("Enter Second Digit: \n");
    scanf("%f", &integer2);

    // Returning the value
    if (operation == '+')
    {
        printf("%f", addition(integer1, integer2));
    }
    if (operation == '-')
    {
        printf("%f", subtracton(integer1, integer2));
    }
    if (operation == '*')
    {
        printf("%f", multipication(integer1, integer2));
    }
    if (operation == '/')
    {
        printf("%f", division(integer1, integer2));
    }
}

// making addition function
float addition (float number1, float number2)
{
    return number1 + number2;
}

// making subtraction function
float subtracton (float number1, float number2)
{
    return number1 - number2;
}

// making multipication function
float multipication (float number1, float number2)
{
    return number1 * number2;
}
// Making division function
float division (float number1, float number2)
{
    return number1 / number2;
}