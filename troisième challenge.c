#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,y;
    printf("veuillez entrer la distance en km et la transformer en y:");
    scanf("%f",&km);
     y= km * 1093.61;
    printf("la distance en yards %f ",y);
    return 0;
}
