#include <cstdio>


int returnNumbersDivisibleBy3(int number){
    if (number % 3 == 0){
        printf("%d id divisible by 3",number);
    }
    else{
        printf("%d is not divisible by 3",number);
    }
    
    return 0;
}

int main(){
    returnNumbersDivisibleBy3(13);
}