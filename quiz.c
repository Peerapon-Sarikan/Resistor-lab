#include<stdio.h>
int main()
{
    float rad;
    int length;
    float resistivity;
   

    printf("enter Radius of the resistor (m) :");
    scanf("%f",&rad);
    printf("Enter the Length of the Resistor (m) :");
    scanf("%d",&length);
    printf("Enter the resistivity of the resistor :");
    scanf("%f",&resistivity);


    float area = 3.14159 * rad * rad;
    float resistance = resistivity * (length / area);


    printf("The value of the resistor :  %.2f OHM", resistance);
    return 0;
}