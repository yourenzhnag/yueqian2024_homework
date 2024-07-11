#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int a;
	char b;
    
	printf("请输入一个整数\n");
	scanf("%d",&a);//非整数部分留在缓冲区
    printf("整数为:%d\n",a);
    while ((b = getchar()) != 10) //getchar() 从缓冲区依次取走一个字符   回车\n 的ASCII为10
    {
        printf("此时缓冲区为: %c\n对应的ASCIIM为:%d\n", b,b);
    }
	
   

}