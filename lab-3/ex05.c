#include<stdio.h>
int main()
{
    float height, radius, volume;
    printf("Enter cone height:");
    scanf("%f", &height);
    printf("Entert cone base radius:");
    scanf("%f", &radius);
    volume= (1.0/3.0) *22/7*radius*radius*height;
    printf("Cone volum = %.1f\n", volume);
    if (volume > 26+0)
    printf("This cone is perfect for Supun project\n");
    else
    printf("This cone is not fit for this project\n");
    return 0;
}