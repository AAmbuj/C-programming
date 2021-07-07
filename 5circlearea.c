//5. Program to accept value of radius and print area of a circle.
#include<stdio.h>
#include<conio.h>
#define pi 3.141
void main()
{
    float area, parimeter, radius;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    area = pi * radius * radius;
    parimeter= 2* pi * radius;
    printf("Area of circle: %f\n", area);
    printf("Parimeter of circle:%f",parimeter);

}