#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//calculating average of a number
double average(void){
    double avg, sum=0, cnt=0;
        printf("Input the numbers you want to find the average of. Input 'x' to indicate the end of the numbers.\n");
        float num;
        char ch;

        while (1) {
            if (scanf("%f%c", &num, &ch)!=2 || ch=='x') {
                break; // break out of the loop if input is not a number or is 'x'
            }
            sum+=num;
            cnt++;
        }
        avg=sum/cnt;
    return avg;
}

int main(void){
    char operator;
    printf("Input the operator:");
    scanf("%c",&operator);
    if (operator=='a'){
        printf("The average of the numbers inputted is: %.3lf \n",average());
    }

return 0;
}
