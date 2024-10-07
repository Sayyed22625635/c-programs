/*
2)Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/
#include <stdio.h>
/*
int main(){
    int a ;
    printf("enter the value of r:");
    scanf("%d",&a);
    int c;
    printf("enter the value of h:");
    scanf("%d",&c);
    float b=(3.14*a*a*c);
    printf("area of circle:%f",b);
    return 0;
}*/
int main(){
    int a ;
    printf("enter the value of r:");
    scanf("%d",&a);
    int c;
    printf("enter the value of h:");
    scanf("%d",&c);
    printf("area of circle:%f\n",3.14*a*a);
    printf("volume of circle whose h is %d  is  %f",c,3.14*a*a*c);
    return 0;
}
