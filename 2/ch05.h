#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include<stdlib.h>
#include<time.h>
void err_exit(char *s)
{
printf("Usage:%s id failed!\n",s);
exit(0);
}
