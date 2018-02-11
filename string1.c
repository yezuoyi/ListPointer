/*************************************************************************
  > File Name       : string1.c
  > Author          : yezuoyi
  > Mail            : yezuoyi@163.com 
  > Created Time    : 2018年02月09日 星期五 16时46分52秒
 ************************************************************************/

#include<stdio.h>

void printStr(char str[]){
	printf("string is :%s\n",str);
}
int main(int argc,char *argv[])
{
	char str[]="GeeksforGeeks";
	printStr(str);
	return 0;
}
