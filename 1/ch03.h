#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
#include<float.h>
void err_exit(char *s)
{
printf("USAGE : *s is faile!\n");
exit(1);
}
