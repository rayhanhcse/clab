#include<stdio.h>
int main()
{
int starValue, endValue, point, s, k;
printf("This program shows PRIME NUMBER in a given range.\n\n"); printf("Enter start value: ");
scanf("%d",&starValue); printf("Enter end value: "); scanf("%d",&endValue);
printf("Prime number is between %d to %d: ",starValue, endValue); for(s= starValue; s<= endValue; s++)
{
point= 0;
for(k=2; k<= s/2; k++)
{
if(s%k == 0)
{
point= 1;
break;
}
}
if(point == 0 && s != 1  && s != 0)
{
printf("%d ", s);
}
}}


