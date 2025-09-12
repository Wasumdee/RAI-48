#include<stdio.h>
#include<math.h>
int main()
{
    struct Vectors
    {
        float x,y;

    };
    struct Vectors u, v, result;
    float d;
    printf("u_x: ");
    scanf("%f", &u.x);
    printf("u_y: ");
    scanf("%f", &u.y);
    printf("v_x: ");
    scanf("%f", &v.x);
    printf("v_Y: ");
    scanf("%f", &v.y);
    result.x = u.x + v.x;
    result.y = u.y + v.y;
    printf("Resultant vector is equivalence to %.1fi = %.1fj\n",result.x, result.y);
    return 0;

}