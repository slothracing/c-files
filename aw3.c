#include <stdio.h>
int main()
{float r, d, a, c;
printf("enter the radius :");
scanf("%f", &r);
d= 2*r;
a= 3.14 * r *r;
c= 2*3.14*r;
printf("diameter=%.1f , area=%.2f , circumference=%.2f ", d, a, c);
}
