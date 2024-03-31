#include <stdio.h>

int main(void)
{
    float v;
    int r;
    
    printf("Enter radius: ");
    scanf("%d", &r);

    v = (4.0f/3.0f) * 3.14f * r * r * r;
    printf("Volume of sphere: %.2f cubic meters\n", v);

    return 0;
}