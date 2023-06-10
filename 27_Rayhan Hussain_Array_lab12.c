#include <stdio.h>
#include <stdlib.h>
int prime(int n);
int main()
{
   	FILE * fptrinput, *fptreven, *fptrodd, *fptrprime;
   	int num;
   	fptrinput = fopen("numbers.txt", "r");
   	fptreven = fopen("even-numbers.txt" , "w");
   	fptrodd = fopen("odd-numbers.txt" , "w");
   	fptrprime= fopen("prime-numbers.txt", "w");
   	if(fptrinput == NULL || fptreven == NULL || fptrodd == NULL || fptrprime == NULL)
   	 {
      		printf("Unable to open file.");
      		exit(0);
    	}
   	printf("File opened successfully.\n");
   	while (fscanf(fptrinput, "%d", &num) != EOF)
   	 {
      		if (prime(num))
         			fprintf(fptrprime, "%d ", num);
      		if (num%2==0)
         			fprintf(fptreven, "%d ", num);
      		else
         			fprintf(fptrodd, "%d ", num);
    	}
   	fclose(fptrinput);
   	fclose(fptreven);
   	fclose(fptrodd);
   	fclose(fptrprime);
   	printf("Data written successfully.");
   	return 0;
}
int prime(int n)
{
   		int i;
   		if (n < 0)
      		return 0;
   		for ( i=2; i<=n/2; i++ )
    		{
      			if (n % i == 0)
      			{
        				return 0;
      			}
    		}
   		return 1;
}
