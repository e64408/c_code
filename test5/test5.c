#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>                  //链式访问
#include<math.h>                    //嵌套调用
#include"add.h"
void bubble_sort(int arr[])
{
//确定冒泡排序的趟数
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡函数排序
	}

}
int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	bubble_sort(arr);//冒泡排序函数

	return 0;
}
//int main()
//{
//	int arr[3][4] = { {1,2,3 }, {4, 5}};
//	int i = 0;
//	for (i = 0; i < 3; i++)//二维数组列不能省略，行可以省略
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//		
//	}
//	//arr是数组，我们对数组arr进行传参，实际上传递过去数组arr
//	// 首元素的地址
//    //char ch[5][6];
//	return 0;
//}
//int main()
//{
//	/*int i = 0;
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	for (i = 0; i <len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	*/
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};//数组在内存中是连续存放的
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = {1,2,3};//不完全初始化
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";
//	int n = 5;
//	// char ch[n];//err          //sizeof元素占的空间大小
//	printf("%d\n",sizeof(arr2));//strlen\0之前的字符个数 
//	return 0;
//}
// strlen 和sizeof没有什么关联
// strlen 是求字符串长度的，只能针对字符串求长度--库函数-使用得引头文件
// sizeof 计算变量、数组、类型的大小-单位是字节-操作符
// 
//int Fib(int n)
//{
//	if (n <= 2)       //斐波那契数列
//		return 1;
//	else if (n > 2)
//	return Fib(n - 1) + Fib(n - 2);
//		      ////1 1 2 3 5 8 13 21 34 55.......前两数之和
//		        ////Fib(n)     n<=2,1
//		       ////            n>2 Fib(n-1)+Fib(n-2)
//
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)    //汉诺塔  青蛙跳台阶
//		             //1根柱子三个从小到大的圆圈移到第三根
//		              //n个台阶 1次可以跳一个台阶
//		              //一次也可以跳2个台阶  跳到n个台阶有几种跳法
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{//先写函数怎么使用，再写实现
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n) 
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//
//}
////斐波那契数列
////1 1 2 3 5 8 13 21 34 55.......前两数之和
////Fib(n)     n<=2,1
////            n>2 Fib(n-1)+Fib(n-2)
//int main()
//{//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=Fac1(n);
//	printf("等于%d\n",ret);
//	return 0;
//}
//my_strlen(char* str)//计算字符串的长度
//{
//	if (*str != '\0')
//	
//		return 1 + my_strlen(str + 1);//递归与迭代
//	else                            //大事化小
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	//printf("len=%d\n",len);
//	printf("len=%d\n",len);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//int main()          //stack overflow栈溢出
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	//递归解法：函数自己调用自己
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	return 0;
//}