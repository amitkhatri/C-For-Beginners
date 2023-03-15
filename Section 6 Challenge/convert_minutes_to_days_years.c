//Create a C program that converts the number of ninutes to days and years
//
//* The program should ask the user to enter the number of minutes via the terminal
//* The program should display as output the minutes and then its equialent in years/days
//* The program should create variables to store (should all be of type double)
//  * minutes (int)
//  * minutes in year
//  * Years
//  * Days
//
//  Need to perform a calculation and use arithmetic operators
//     * You have to figure out conversions :)
//
//
#include <stdio.h>
int main(){
    int minutes;
    double minutes_in_year = 525600;
    double years;
    double days;

    printf("Hello! Please enter the number of minutes you'd like to convert to years: ");
    scanf("%d",&minutes);
    years = (minutes / minutes_in_year);
    days = (years * 365);
    printf("The number of minutes entered is: %d\n",minutes);
    printf("%d minutes equals %f years\n",minutes,years);
    printf("%d minutes equals %f days\n",minutes,days);
    return 0;
}
   
