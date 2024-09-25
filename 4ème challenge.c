#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh, ms;
    printf("veuillez entrer la vitesse en kmh et la tranformeren ms:");
    scanf("%f", &ms);
    ms = kmh * 0.27778;
    printf ("la vitesse en ms %f",ms);
    return 0;
}
