#include <cstdio>

int step_function(int number){


    /*
        This is a fucntion that prints the step fucntion given many numbers
    
    */
    int result = 0;


    if (number < 0){
        result = -1;
    }
    else if(number>0){
        result = 1;
    }
    return result;
}

int main(){
   int positive= step_function(12);
   int negative= step_function(-1);

   printf("%d is a positive number and %d is a negative number",positive,negative);
}

