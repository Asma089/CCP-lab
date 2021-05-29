#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
float a, b, c;
float D, deno, root1, root2;
printf("\n enter the values of a, b, and c :");
scanf("%f %f %f" , &a, &b, &c);
D = (b*b) - (4*a*c);
deno = 2*a;
if(D>0)
{
printf("\n REAL ROOTS");
root1 = (-b + sqrt(D))/deno;
root2 = (-b - sqrt(D))/deno;
printf("\n ROOT1 = %f \t ROOT2 = %f", root1, root2);
}
else if(D == 0)
{
printf("\n EQUAL ROOTS");
root1 = -b/deno;
printf("\n ROOT1 = %f \t ROOT2 = %f", root1, root2);
}
else
printf("\n IMAGINARY ROOTS");
return 0;
}
