#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入:>");
		scanf("%s", password);
		if(strcmp(password,"123456")==0)//==不能用来判断两个字符串是否相等
		{                           //应该使用一个库函数-strcmp
			printf("登陆成功");
			break;
		}

	}
	if (i == 3)
	{
		printf("登陆失败");
	}

	return 0;

}
//{
//	int k =6;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("找不到");
//		}
//		
//		return 0;
//}
//{
//	int ret = 1;
//	int n = 0;
//	int i = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n",ret);
//	return 0;
// }

//折半查找算法
//二分查找算法    log以2为底的n
// 
//{
//	int i = 0;
//	   //初始化    判断   调整
//	for (i = 1 ; i <= 10 ; i++)
//	{
//		printf("%d\n",i);
//	}
//
//
//	return 0;
//}
//for循环最好采用前闭区间后开区间形式
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0 ;
//
//}
//{
//	int ch = 0;
//	//EOF--end of file 文件结束标志
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	
//	int ret = 0;
//	char password[20] = {0};
//	printf("请输入密码：>");
//	scanf("%s",password);//输入密码，并存放在password数组中
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）：>");
//	//缓冲区还剩余一个'\n'
//	//读取一下\n
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}