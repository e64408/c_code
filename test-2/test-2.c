//#include<stdio.h>
//enum Color
//{
	//RED,
    //YELLOW,
    //BLUE
//};
//int main()
//{   //�����ڼ�����ϴ洢�Ķ�����
	//ASCII��
	//char arr1[] = "abc";
	//////char arr2[] = { 'a','b','c','\0' };//"\0"�ַ����Ľ�����־
	//////printf("%s\n",arr1);
	//////printf("%s\n", arr2);
	//////printf("%d\n", strlen(arr1));//strlen-string length-�����ַ������ȵ�
	//////printf("%d\n", strlen(arr2));
	//////printf("c:\\test\\32\\test.c");
	//////enum Color color = BLUE;
	//////color = YELLOW;
	//////printf("%d\n", FEMALE);

	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf_s("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);
	//scanf_s("%d%d", &num1,&num2);//ȡ��ַ����&
  // sum = num1 + num2;
   //printf("sum=%d\n", sum);
	//const-������
	//const���εĳ�����
	 //#define����ı�ʶ������
	//ö�ٹؼ�-enum
	//enum Sex         MALE,FEMALE,SECRET

	//return 0;             
	                      
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//
//	return 0;
//
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//Add(int x, int y)
//{
//	int z=x + y;
//	return z;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int Add(int x,int y);
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//static ���ξֲ�����
// Ҳ�Ǹı��˺�����������-��׼ȷ
// static���κ����ı��˺�������������
// �ⲿ��������---->�ֲ���������
//�ֲ��������������ڱ䳤
// �ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
// ����Դ�ļ����޷�ʹ��
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n",a);
//}
//int g_val = 2022;//ȫ�ֱ���
//extern int Add(int , int );
//define---����ı�ʶ������
//#define MAX 100
//define���Զ����--������



//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��ķ�ʽ
//#define MAX(X,Y)(X>Y?X:Y)
int main()
{
	int ch = 0;//ctrl+z������ֹ
	while ((ch = getchar()) != EOF)//EOF--end of file-> -1
		putchar(ch);

//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;// ��ֹ����ѭ�����ؼ���������continue��������ѭ������Ĵ��룬
//		printf("%d\n", i);//ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�
//		i++;
//		/*if (i == 6)
//			break;*///�жϴ���
//}


	return 0;
}
	/*int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:m++;
			n++;
			break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n",m,n);
	return 0;*/
//}
	//int day = 0;//switch��Ҫ����
	//int n = 1;
	//scanf("%d",&day);
	//switch (day)
	//{
	//case 1:              //case���ͳ������ʽ	
	//	if (n == 1)
	//		printf("hehe\n");
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//   
	//	printf("������\n");//case���治һ��Ҫ��break
	//	break;
	//case 6:
	//case 7:
	//	printf("��Ϣ��\n");
	//	break;
	//default://����ض���������ϣ���Ĭ�ϲ���//���п���    case��defaultû��˳������
	//	printf("�������");                               //����case��ǰdefault�ں� 
	//	break;
	//{
	//case 1://case���ͳ������ʽ
	//	printf("������\n"); break;
	//case 2:
	//	printf("������\n"); break;
	//case 3:
	//	printf("������\n"); break;
	//case 4:
	//	printf("������\n"); break;
	//case 5:
	//	printf("������\n"); break;
	//case 6:
	//	printf("��Ϣ��\n"); break;
	//case 7:
	//	printf("��Ϣ��\n"); break;
	//}
	/*if (1 == day)
		printf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	else if (3 == day)
		printf("������\n");
	else if (4 == day)
		printf("������\n");*/

		/*int a;
		printf("������һ��������");
		scanf("%d", &a);
		if (a % 2 == 0)
			printf("%dΪż����", a);
		else
			printf("%dΪ������");*/
		/*int a;
		printf("�������֣�");
		scanf("%d",&a);
		if (a % 2 == 0)
			printf("ż��");
		else
			printf("����");*/
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d\n",i);
		i++;
	}*/
	/*int age = 110;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("������\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("������\n");
	*/
	/*char ch = 'w';
	char* A = 'a';
	printf("%c\n",A);
	printf("%d\n",sizeof(A));*/
	//ָ���С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�
	//int a = 10;//4���ֽ�
	//int* p = &a;//&aȡ��ַ
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//*p=20;//*-�����ò�����
	//printf("a=%d\n",a);
	//printf("%p\n",&a);//%p��ӡ��ַ
	//int a = MAX;
	//int a = 10;
	//int b = 20;
	//int max = Max(a, b);
	//printf("max=%d\n",max);
	////��ķ�ʽ
	//max = MAX(a,b);
	//printf("max=%d\n",max);




	

	/*int a = 10;
	int b = 20;
	int sum = Add(a, b);
		printf("sum=%d\n",sum);
		return 0;*/
	//extern-�����ⲿ���ŵ�
	/*
	extern int g_val;
	printf("g_val= %d\n",g_val);*/
	/*int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	*/
	//������洢����
	     /* �Ĵ���
		  ���ٻ���
		  �ڴ�
		  Ӳ��*/ 
	//signed int;�з��ŵ�
	//unsigned int num=1;�޷��ŵ�
	//struct-�ṹ��ؼ���
	//union-������/������
	//typedef---���Ͷ���-�����ض���
	

	/*int a = 10;*///�ֲ�����-�Զ�����
	//	int arr[10] = {0};
	//	arr[4];/�±����ò�����[]
	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b);//()---�������ò�����
	//printf("%d\n",z);
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����Ʋ���
// ����--ԭ�룬���룬������ͬ
// ������
// ԭ��   ---->           ����          ----->����
// ֱ�Ӱ�������        ԭ��ķ���λ����       ����+1
// д���Ķ���������     ����λ��λȡ���õ�
// -2
// 10000000000000000000000000000010ԭ��
// 11111111111111111111111111111101����
// 11111111111111111111111111111110����
//[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]����λ1�Ǹ���
//[0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]����λ0������
/*int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
	scanf_s("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");
	return 0;*/
	/*int line = 0;
	printf("�������\n");
	while (line < 20000)
	{
		printf("��һ�д���%d\n",line);
		line++;

	}
	printf("��offer\n");*/

	//int num1 = 10;
	//int num2 = 20;
	//int sum = 0;
	//int a = 100;
	//int b = 200;
	//sum = Add(num1, num2);
	////sum = Add(a, b);
	//printf("sum = %d\n",sum);
	//int a = 1;
	//int b = 2;
	//int c = 3;
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}*/
	/*printf("%d\n",arr[4]);*/
	//&��λ��
	//|��λ��
	//^��λ���
	/*int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof (arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);*/
	
	/*if (num1 > num2)
		printf("�ϴ�ֵ��:%d\n", num1);
	else
		printf("�ϴ�ֵ��:%d\n", num2);*/
	/*Max(num1, num2);*/
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max= %d\n", max);
	/*int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));*/
	//int a = 0;//ռ��4���ֽڣ�32��bitλ
	//int b = ~ a;//b���з��ŵ�����
	//~��ȡ��
	//ԭ�롢���롢����
	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
	//11111111111111111111111111111111����       ��һλ���Ų���
	//11111111111111111111111111111110����
	//10000000000000000000000000000001ԭ�����һλ-1    -1
	//printf("%d\n",b);//ʹ�õģ���ӡ�����������ԭ��
	//int a = 10;
	//int b = a++;//����++����ʹ����++
	//int b1 = ++a;//ǰ��++����++��ʹ��
	//printf("a=%d b=%d\n", a, b);
	//int a = 10;
	//int b = a--;
	//int b = --a;
	////printf("a=%d b=%d", a, b);//����--����ʹ����--/9 10
	//printf("a=%d b=%d", a, b);//ǰ��--����--��ʹ��/9 9
	/*int a =(int) 3.14;
	printf("%d\n",a);*/
	//==����      ��=�����     >=���ڵ���
	//&&�߼���       ȫ1-��      ��0-0
	//||�߼���       ��1-��      ȫ0-0
	/*int a = 0;
	int b = 0;*/
	//int c = a && b;
	/*int c = a || b;
	printf("%d\n", c);*/
	/*int a = 10;
	int b = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;
	*/