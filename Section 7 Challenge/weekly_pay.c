//In this challenge, you are to create a C program that calculated your weekly pay.
//
//The program should ask the user to enter the number of hours worked in a week.
//via the keyboard.
//
//The program should siplay as output the gross pay, taxes, and the net pay
//The following assumptions are made
//Base Pay: $12.00 / hour
//Overtime (excess of 40 hours) = time and a half ($18?)
//Tax Rate:
//  15% of the first 300
//  20% of the next $150
//  25% of the rest
//
#include <stdio.h>
int main(){
    float payRate = 12.00;
    float grossPay;
    float tax;
    int hoursWorked;

    printf("Enter the hours worked: \n");
    scanf("%d",&hoursWorked);

    if(hoursWorked <= 40){
        grossPay = (payRate * hoursWorked);
    }
    else{
        grossPay = (payRate * 40) + ((payRate + (payRate/2.00)) * (hoursWorked - 40));
    }


    if(grossPay <= 300){
        tax = (grossPay * .15);
    }
    else if((300 < grossPay) && (grossPay <= 450)){
            tax = ((300 * .15) + ((grossPay - 300) * .20));
    }
    else{
        tax = (300 * .15) + (150 *.20) + ((grossPay - 450) * .25);
    }

    printf("The gross pay is:     $%.2f\n",grossPay);
    printf("The tax is:           $%.2f\n",tax);
    printf("The net pay is:       $%.2f\n",grossPay - tax);
    return 0;
}
