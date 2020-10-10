//1000-2000年之间找出所有的闰年，并且计算有多少年
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;//计算有多少年
	printf("闰年：");
	for (year = 1000; year <= 2000; year++)
	{
		//如何判断是否为闰年
		//（1、能被4整除，不能被100整除 。2、能被400整除）
		/*if((year%4==0)&&(year%100!=0))
		{
			printf("%d ",year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}*/   //以上为方法一

		if ((year % 4 == 0) && (year % 100 != 0)|| (year % 400 == 0))//方法二
		{
			printf("%d ", year);
			count++;
		}	
	}
	printf("\n\ncount=%d\n", count);
	return 0;
}
