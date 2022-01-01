#include <cstdio>

int main(){
    unsigned long integers[]={10,20,12,21,34,36};


    for (unsigned long i :integers)
    {
        if(i % 2 == 0){
            printf("%lu is divisible by 2 \n",i);
        }
    }
    
}



