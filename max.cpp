#include <cstdio>





int main(){
    unsigned long maximum=0;

    unsigned long values[]={10,20,30,40};


    for(unsigned long value:values){
        if (value > maximum) maximum = value;

    }

    printf("The maximum value is %lu",maximum);
}