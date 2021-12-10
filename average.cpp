#include <cstdio>


int sum(int x , int y){
    return x + y;
}

int main(){
    int a = 35;

    int b = 345;


    printf("%d + %d = %d",a,b,sum(a,b));
}