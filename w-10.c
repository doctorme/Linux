#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void getnum(FILE *fp,int k){
	int n,i,temp;
	int offset=0;
	char buf[10];
	if(fread(&n,sizeof(n),1,fp)!=1){
		printf( "read file failed! \n" );
		exit(0);
	}
	if(k>n||k<1){
		printf("the nupber is wrong! \n");
		exit(0);
	}
	for(i=1;i<k;i++){
		fread(&temp,sizeof(temp),1,fp);
		offset=offset+temp;
	}
	fread(&temp,sizeof(temp),1,fp);
	fseek(fp,offset+4+n*4,SEEK_SET);
	fread(buf,temp,1,fp);
	printf("the record is %s\n",buf);
}

int main(){
	int k;
	printf("input the number:");
	scanf("%d",&k);
	FILE*fp=fopen("file.test","r");
	getnum(fp,k);
	fclose(fp);
	return 0;
}
