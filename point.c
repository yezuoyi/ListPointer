/*************************************************************************
    > File Name       : point.c
    > Author          : yezuoyi
    > Mail            : yezuoyi@163.com 
    > Created Time    : 2018年02月09日 星期五 10时08分58秒
 ************************************************************************/

#include<stdio.h>

void change_value(int* p){
	*p = 15;
}

int main(int argc,char *argv[])
{
	int * pI = NULL;
	int i = 5;
	pI = &i;
	change_value(pI);

	printf("%d",i);
     return 0;
}
