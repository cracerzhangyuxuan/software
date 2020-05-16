#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
	FILE *fpr;
	char temp;
	int count=0;
	char arr1[]="-c";
	char arr2[]="-w";
	if(strcmp(argv[1],arr2)){
		if((fpr=fopen(argv[2],"r"))==NULL){ 
			printf("Can not open the source file!\n");
			exit(0);
		}
		fseek(fpr,0L,0);
		while(!feof(fpr)){
			temp=fgetc(fpr);
			count++;
		}
		printf("×Ö·ûÊý:%d\n",count-1);
	}else if(strcmp(argv[1],arr1)){
		if((fpr=fopen(argv[2],"r"))==NULL){ 
			printf("Can not open the source file!\n");
			exit(0);
		}
		fseek(fpr,0L,0);
		while(!feof(fpr)){
			temp=fgetc(fpr);
			if(temp==','||temp==' ')
				count++;
		}
		printf("µ¥´ÊÊý:%d\n",count+1);
	}
	fclose(fpr);
	return 0;
}

