#include <cstdio>



int sum(int x, int y){
    return x + y;
}

int main(){

    int a = 23;

    int b = 26;

    printf("The Sum of %d and %d is: %d \n",a,b,sum(a,b));
}