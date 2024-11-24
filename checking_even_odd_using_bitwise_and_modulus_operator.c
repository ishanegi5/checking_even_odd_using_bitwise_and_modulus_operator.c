#include<stdio.h>
void main()
{
    int a;
    printf("Enter a= ");
    scanf("%d",&a);
    printf("Using modulus finding whether the number entered is even or odd: ");
    if(a%2==0)
    {
        printf("Even number.");
    }
    else
    {
      printf("Odd number.");
    }
printf("\nUsing bitwise finding whether the number entered is even or odd: ");
if(a&1)
{
    printf("Odd number.");
}
else
{
    printf("Even number.");
}
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
}
