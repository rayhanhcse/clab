#include <stdio.h>
#include <stdlib.h>
int main(){

	int *ptr, i , n1, n2;
	printf("Enter size of array: ");
	scanf("%d", &n1);

	ptr = (int*) malloc(n1 * sizeof(int));

	printf("Address of previously allocated memory: \n");

	for(i = 0; i < n1; i++){
		printf("%u\t",ptr + i);
	}

	printf("\n\nEnter new size of array:");
	scanf("%d", &n2);

	ptr = realloc(ptr, n2);

	printf("Address of newly allocated memory: \n");
	for(i = 0; i < n2; i++){
		printf("%u\t", ptr + i);
	}
	return 0;
}
