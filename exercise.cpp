#include <cstdio>

int absolute_value(int x){
    //Your code here
    if (x >=0){
        return x;
    }
    else{
        return x * -1;
    }
    return 0;
}


int main(){
    int my_num = 2;

    printf("The absolute value of %d is %d.\n",my_num,absolute_value(my_num));
}