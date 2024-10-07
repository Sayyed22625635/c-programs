/*
3) Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/
#include <stdio.h>

int main(){
    float c;
    printf("enter the centigrade temperature:");
    scanf("%f",&c);
    printf("fahrenheit temperature from centigrade of %f is %f ",c,(9.0/5.0)*c+32);
    // if your variable is in float then you have to either give one of the value in floating point for ex: 9.0/5.0 or 9.0/5 
    return 0;
}