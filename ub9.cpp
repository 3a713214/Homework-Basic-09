#include<stdio.h>                        
#include<stdlib.h>
int main(void)
{
	int i,j;
	for(i=1;i<=9;i++)  
	{        
		for( j=1;j<=9;j++)         
			printf("%d*%d=%2d  ",j,i,j*i);                  
				printf("\n");
			}
			system("pause");
			return 0;
}
