#include<stdio.h>
int main(){

	int chr=0, line=0, word=0;
	FILE *filePtr;
	char ch;


	filePtr=fopen("RH.txt","r+");

	while((ch=fgetc(filePtr))!=EOF){

		if(ch==' ' || ch=='\n' || ch=='\0' || ch=='\t'){
			word++;
		}
		if(ch=='\n' || ch=='\0'){
			line++;
		}
chr++;
	}

printf("Word= %d\n",++word);
	printf("Line= %d\n",++line);
	printf("characters= %d\n",chr);
	fclose(filePtr);

	return 0;
}
