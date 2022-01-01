#include <cstdio>

int main(){
    int array[]={1,2,3,4};

    printf("The third element of this array is %d \n",array[2]);

    array[2]=1000;

    printf("The third element in the array is %d \n",array[2]);
}