#include "ch03.h"
int main(){
	int fd =open("./text.txt",O_RDWR|O_CREAT);
        if (fd==-1)
        {
         perror("open text.txt");
         exit(-1);
        }
	char tmp[4];
        int t[100];
	memset(tmp,0,sizeof(tmp));
	int tempsize=0;
	int ret= read(fd,tmp,4);
        int s;
        sscanf(tmp,"%d",&s);
        {
        printf("文件记录总数为：\n%d\n",s);
        }
	int n= *(int*)tmp;
        printf("文件记录字节数分别为：\n");
	for(int i =0;i<s;i++)
	{
		lseek(fd,0,SEEK_CUR);
		memset(tmp,0,sizeof(tmp));
                int sizeofkret =read(fd,tmp,4);
	        sscanf(tmp,"%d",&t[i]);
                printf("%d\n",t[i]);
        }
        printf("请输入你要查找的文件记录编号\n");
        int q;
        scanf("%d",&q);
        for(int i =0;i<q-1;i++)
	{
		lseek(fd,t[i],SEEK_CUR);
        }
        char mp[1000];
        memset(mp,0,sizeof(1000));
        int sizeofkret =read(fd,mp,t[q-1]);
        for(int i=0;i<t[q-1];i++)
        {
        printf("%c",mp[i]);
        }
        printf("\n");
	return 0;
}
