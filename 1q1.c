#include <stdio.h>
int main()
{   
    int a,b,c;
    printf("Enter the side1: ");
    scanf("%d",&a);
    printf("Enter the side2: ");
    scanf("%d",&b);
    printf("Enter the side3: ");
    scanf("%d",&c);
    if(a==b && b==c && c==a)
    {
        printf("The triangle is equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("The triangle is isosceles");
    }
    else
    {
        printf("The triangle is scalene");
    }
    return 0;
}
