#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int w,x,y;
printf("�п�J�T�Ӿ�ƼƦr\n");
scanf("%d%d%d",&w,&x,&y);
if (w>x)
if(w>y)
if(x>y)
printf("�T�ƥѤp��j=%d%d%d\n",y,x,w);
else
printf("�T�ƥѤp��j=%d%d%d\n",x,y,w);
else
printf("�T�ƥѤp��j=%d%d%d\n",x,w,y);
else
if (x>y)
if (w>y)
printf("�T�ƥѤp��j=%d%d%d\n",y,w,x);
else
printf("�T�ƥѤp��j=%d%d%d\n",w,y,x);
else
printf("�T�ƥѤp��j=%d%d%d\n",w,x,y);
system("PAUSE");
return 0;
}
