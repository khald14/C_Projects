#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// simple calculator program, allow simple calculations, for example : 4+4 , 5^2 ... 
int main(int argc, char* argv[])
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter calculation:\n\n");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch (operator)
    {
    case '/': 
        answer = valueOne / valueTwo;
        break;
    case '*':
        answer = valueOne * valueTwo;
        break;
    case '+': 
        answer = valueOne + valueTwo;
        break;
    case '-': 
        answer = valueOne - valueTwo;
        break;
    case '^': 
        answer = pow(valueOne, valueTwo);
        break;
    case ' ': 
        answer = sqrt(valueTwo);
        break;
    default: 
        printf("Fail. Enter an Operator from ( /, *, +, -, ^)\n");
        return 0;

    }
    printf("%.9g%c%.9g =  %.6g\n\n", valueOne, operator, valueTwo, answer);
    return 0;
}
