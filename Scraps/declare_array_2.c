#include <stdio.h>
int main(){
    int arr[10] = {[0] = 1, [1] = 2, [2] = 3, [3] = 4, [4] = 5, [5] = 6, [6] = 7, [7] = 8, [8] = 9, [9] = 10};

    for(int i = 0; i < 10; ++i){
        printf("%d\n",arr[i]);
    }

    return 0;

}
