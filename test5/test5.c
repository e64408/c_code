#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>                  //��ʽ����
#include<math.h>                    //Ƕ�׵���
#include"add.h"
void bubble_sort(int arr[])
{
//ȷ��ð�����������
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ��ð�ݺ�������
	}

}
int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	bubble_sort(arr);//ð��������

	return 0;
}
//int main()
//{
//	int arr[3][4] = { {1,2,3 }, {4, 5}};
//	int i = 0;
//	for (i = 0; i < 3; i++)//��ά�����в���ʡ�ԣ��п���ʡ��
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//		
//	}
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ����arr
//	// ��Ԫ�صĵ�ַ
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
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};//�������ڴ�����������ŵ�
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
//	int arr[10] = {1,2,3};//����ȫ��ʼ��
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";
//	int n = 5;
//	// char ch[n];//err          //sizeofԪ��ռ�Ŀռ��С
//	printf("%d\n",sizeof(arr2));//strlen\0֮ǰ���ַ����� 
//	return 0;
//}
// strlen ��sizeofû��ʲô����
// strlen �����ַ������ȵģ�ֻ������ַ����󳤶�--�⺯��-ʹ�õ���ͷ�ļ�
// sizeof ������������顢���͵Ĵ�С-��λ���ֽ�-������
// 
//int Fib(int n)
//{
//	if (n <= 2)       //쳲���������
//		return 1;
//	else if (n > 2)
//	return Fib(n - 1) + Fib(n - 2);
//		      ////1 1 2 3 5 8 13 21 34 55.......ǰ����֮��
//		        ////Fib(n)     n<=2,1
//		       ////            n>2 Fib(n-1)+Fib(n-2)
//
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)    //��ŵ��  ������̨��
//		             //1������������С�����ԲȦ�Ƶ�������
//		              //n��̨�� 1�ο�����һ��̨��
//		              //һ��Ҳ������2��̨��  ����n��̨���м�������
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{//��д������ôʹ�ã���дʵ��
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
////쳲���������
////1 1 2 3 5 8 13 21 34 55.......ǰ����֮��
////Fib(n)     n<=2,1
////            n>2 Fib(n-1)+Fib(n-2)
//int main()
//{//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=Fac1(n);
//	printf("����%d\n",ret);
//	return 0;
//}
//my_strlen(char* str)//�����ַ����ĳ���
//{
//	if (*str != '\0')
//	
//		return 1 + my_strlen(str + 1);//�ݹ������
//	else                            //���»�С
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
//int main()          //stack overflowջ���
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	//�ݹ�ⷨ�������Լ������Լ�
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	return 0;
//}