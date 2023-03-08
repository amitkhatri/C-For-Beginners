//Section 5 challenge.
//
//Challenge: Create a C program that displays the perimeter and area
//	     of a rectangle
//
//	     The program should create 4 variable of type double
//	     * One variable to store the width
//	     * One variable to store the height
//	     * One variable to store the perimeter
//	     * One variable to store the area of the rectangle
//
//	     The program should perform the calculation for the
//	     perimeter of the rectangle
//	     * Use the + operator (add) and * operator (muliply)
//	     * Perimeter is calculated by adding height and width and then
//	       multiply by 2
//	     * Area is calculated by muliplying width * height variables.
//
//	     * The program should display the height, width, and area 
//	       variables in the correct format in ONE print statement.
//
#include<stdio.h>
int main(int argc, char *argv[]){
    double width, height, perimeter, area;

    printf("Please enter the rectangle width: ");
    scanf("%lf",&width);

    printf("Please enter the rectangle height: ");
    scanf("%lf",&height);

    perimeter = 2 * (width * height);
    area = width * height;

    printf("The rectangle height is %.1lf, the rectangle width is %.1lf, and the area is %.1lf\n",height,width,area);

    return 0;
}

