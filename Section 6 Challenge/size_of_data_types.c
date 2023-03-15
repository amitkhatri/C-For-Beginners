//Create a C program that displays the byte size of basic data types supported in C.
//  * The output varies depending on the system you are running the program on
//
//Display the byte size of the following types
//  * int
//  * char
//  * long
//  * long long
//  * double
//  * long double
//
//Use the %zd format specifier
//
//Use the sizeof operator
//
//Test on more than one computer to see differences
#include <stdio.h>
int main(){
    printf("The size of an int on this machine is %zd bytes\n",sizeof(int));
    printf("The size of a char on this machine is %zd bytes\n",sizeof(char));
    printf("The size of a long on this machine is %zd bytes\n",sizeof(long));
    printf("The size of a long long on this machine is %zd bytes\n",sizeof(long long));
    printf("The size of a double on this machine is %zd bytes\n",sizeof(double));
    printf("The size of a long double on this machine is %zd bytes\n",sizeof(long double));
    return 0;
}
