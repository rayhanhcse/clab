#include<stdio.h>
int main()
{
 int row,i,T,s;
 printf("Enter row number: ");
 scanf("%d", &row);
 for(i=1; i<=row; i++)
 {
 for(s=1; s<= row-i; s++)
 {
 printf(" ");
 }
 for(T=1; T <= (2*i-1); T++)
 {
 if(T == 1 || i == row || T == (2*i-1))
 // i==row--->last line T==1---->first colum T==(2*i-1)-----> last colum
 {
 printf("*");
 }
 else
 {
 printf(" ");
 }
 }
 printf("\n");
 }
 getch();
}
