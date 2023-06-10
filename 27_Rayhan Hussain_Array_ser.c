
#include<stdio.h>
int main()
{
 int point = 0, search, asize;
 printf("Enter Array Size: ");
 scanf("%d", &asize);
 int arr[asize];
 for(int j=0; j<asize; j++)
 {
 printf("Enter %d no. element ", j+1);
 scanf("%d", &arr[j]);
 }
 printf("\nEnter a searching number: ");
 scanf("%d",&search);
 for(int i=0; i<asize; i++)
 {
 if(search == arr[i])
 {
 printf("%d is available in %d no. position\n", search, i+1);
 point = 1;
 }
 }
 if(point == 0)
 {
 printf("\n%d is not available in this array", search);
 }
 getch();
}
