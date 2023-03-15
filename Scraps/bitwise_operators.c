#include <stdio.h>
int main(){
    unsigned int A = 13; // 0000 1101
    unsigned int B = 60; // 0011 1100
    unsigned int C;

    C = A & B; // 0000 1100 =  12

    printf("A is %d\n",A);
    printf("B is %d\n\n",B);
    
    printf("A AND(&) B is %d\n",C);

    C = A | B; // 0011 1101

    printf("A OR(|) B is %d\n",C);

    C = ~A;
    printf("If A is %d, then ~A(NOT A) is %d\n",A,C);

    return 0;
}

    


