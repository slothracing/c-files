#include <stdio.h>
int main()
{ float p,che,m ,b ,c, per;
printf("enter the marks of physics, chemistry, biology, maths, computer:");
scanf("%f %f %f %f %f", &p, &che, &b ,&m, &c);
per= ((p+che+b+m+c)*100)/500;
printf("the percentage:%.1f", per);
if(per>=90)
    printf("\ngradeA");
else if(per<70 && per>=80)
    printf("\ngrade B");
else if(per>=70 && per<80)
printf("\ngrade C");
else if(per>=60 && per<70)
printf("\ngrade D");
else if(per>=40 && per<60)
printf("\ngrade E");
else if(per<40)
printf("\ngrade F"); }
