//Quick practice of printf/scanf
#include <stdio.h>
int main(){
    char str[50];

    printf("Please enter your name!\n");
    printf("Name: ");
    scanf("%s",str);
    printf("Hello, %s!",str);

    return 0;

}
