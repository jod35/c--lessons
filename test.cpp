#include <cstdio>

int calc_age(int age){
    printf("Hello my age is %d",age);

    return 0;
}
 

int calc_area(int base, int height){
    int area = 0.5 * (base * height);

    return area;
}

int main(){
    // calc_age(20);

    int base=2;

    int height=45;

    int result=calc_area(base,height);

    printf("The area of a triangle with base %d units and height %d units is %d square units",base,height,result);
}