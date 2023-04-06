#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Sum(void);
double Substraction(void);
double Multiplication(void);
double Division(void);
double SquareRoot(void);
double Power(void);
double Remainder(void);


int main(void)
{
    char operat;
    printf("Enter the operator: \n");
    scanf("%c", &operat);
    switch (operat)
    {
    case '+':
        printf("%.3lf",Sum());
        break;

    case '-':
        printf("%.3lf",Substraction());
        break;

    case '*':
    printf("%.3lf",Multiplication());
        break;

    case '/':

        printf("%.3lf",Division());
        break;

    case 's':

        printf("%.3lf",SquareRoot());
        break;

    case '^':

        printf("%.3lf",Power());
        break;

    case '%':

        printf("%.3lf",Remainder());
        break;

    default:
        printf("The operator is invalid.\n");
        break;
    }
    return 0;
}

double Sum(void){
    double result;
    double a, b;
    printf("You used the sumation operator. \n");
    printf("Enter the two numbers: \n");
        scanf("%lf %lf", &a, &b);
        result = a + b;
    return result;
}
double Substraction(void){
    double result;
    double a, b;
    printf("You used the substraction operator. \n");
    printf("Enter the two numbers: \n");
        scanf("%lf %lf", &a, &b);
        result = a - b;
        return result;

}
double Multiplication(void){
    double result;
    double a, b;
    printf("You used the multiplication operator. \n");
        printf("Enter the two numbers: \n");
        scanf("%lf %lf", &a, &b);
        result = a * b;

    return result;
}
double Division(void){
    double result;
    double a, b;
    printf("You used the division operator. \n");
        printf("Enter the two numbers: \n");
        scanf("%lf %lf", &a, &b);
        result = a / b;
    return result;
}
double SquareRoot(void){
    double result,a;
    printf("You used the square root operator. \n");
        printf("Enter the number: \n");
        scanf("%lf", &a);
        result = sqrt(a);
    return result;
}
double Power(void){
    double result;
    double a, b;
    printf("You used the exponential operator. \n");
        printf("Enter the number and the exponent: \n");
        scanf("%lf %lf", &a, &b);
        result = pow(a, b);
    return result;
}
double Remainder(void){
    double result;
    double a, b;
    printf("You used the remainder operator. \n");
        printf("Enter the two numbers: \n");
        scanf("%lf %lf", &a, &b);
        result = remainder(a, b);
    return result;
}
