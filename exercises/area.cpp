#include <cstdio>

float calculateAreaOfTriangle(float base, float height){
    return 0.5 * (base * height);
}

int main(){
    float b = 2.6;
    float c = 3.6;

    printf("The area of a Triangle with base %f and height %f is %f  square units",
        b,c,calculateAreaOfTriangle(b,c));


    return 0;
}