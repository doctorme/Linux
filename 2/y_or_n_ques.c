#include "ch05.h"
int y_or_n_ques(const char *question)
{
fputs(question,stdout);/*输出提问*/
while(1)
{
int c,answer;
fputc(' ',stdout);/*use空格分开问题与回答*/
/*读此行第一个字符。它应当是回答字符，但也可能不是*/
c=tolower(fgetc (stdin));
answer=c;
while(c!='\n'&&c!=EOF)/*忽略此行的其余字符*/
c=fgetc(stdin);
if(answer=='y')/*如果是回答字符，响应回答*/
return 1;
if(answer=='n')/*如果是非回答字符，继续要求合法回答*/
return 0;
fputs("please answer y or n:",stdout);
}
}
