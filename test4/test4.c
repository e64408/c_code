#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int Add(int x, int y);//��������

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);//��������
	printf("sum=%d\n", sum);
	return 0;
}
int Add(int x, int y)//�����Ķ���
{
	int z = x + y;
	return z;
}
//int binary_search(int arr[], int k, int sz)
//{
//	
//	int left = 0;
//	int right = sz-1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;   //���ֲ��ҷ�
//		if (arr[mid] <k )
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ�ָ���±�");
//	}
//	else 
//	{
//		printf("�ҵ����±��ǣ�%d", ret);
//	}
//		
//		return 0;
//}
 ////int main()
//{
//	int len = 0;
//	printf("%d\n",strlen("abc"));
//	return 0;
//}
// 
// 
//void Add(int* p)
//{
//	(*p)++;
//
//}
//int main()
//{
//	int num = 0;          //sum���ú�����1
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

















            //������arr��һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{    //int sz = sizeof(arr) / sizeof(arr[0]);//���ִ����ǲ��Ե�
//	int left = 0;
//	int right = sz-1;//���±�->����Ԫ�ؼ�һ
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
//		if (arr[mid] < k)	                         //�㷨��ʵ��
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//	int main()
//{         //���ֲ���
//	//�����������в��Ҿ����ĳ����
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	//���ݹ�������arr��Ԫ�صĵ�ַ
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//binary_search���ֲ��Ҵ���
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ����±��ǣ�%d\n",ret);
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{      //�ж�yeaar�Ƿ�������
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n",year);
//		}
//	}
//
//	return 0;
//}
//int is_prime(int n)
//{    //2->n-1
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n",i);
//	}
//
//	return 0;
//}
//int Add(int x,int y)
//{
//	int z = 0;
//
//	z = x + y;
//		return z;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//	return x;
//	else (x <= y);
//    return y;
//}
//Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa= *pb;
//	*pb = tmp;
//
//
//}
//Swap(int* pa, int* pb)    //ʵ�ʲ���--���� ���� ���ʽ ��������ʱ����Ҫ��ȷ����ֵ    
//{                         //��ʽ����--��ʽ�ϵĲ�����ֻ���ڱ�����ʱ�Ż�ʵ����
//	int tmp = 0;          //��ɺ��Զ����٣�������ʽ����ֻ�ں�������Ч
//	tmp = *pa;            //��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
//    * pa = *pb;           //���βε��޸��ǲ���ı�ʵ�ε�
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//   //����Swap����    
//	Swap(&a, &b);            //��ֵ����  ���βε��޸��ǲ���ı�ʵ�ε�
//	                       //��ַ���� �Ѻ����ͺ�����ߵı�������������ϵ
//	printf("a=%d b=%d\n",a,b);//Ҳ����˵�����ں����ڲ�ֱ�Ӳ��������ⲿ�ı���
//	return 0;
//}
//{
//	int a = 10;
//	int b = 20;
//	
//	//int tmp = 0;//tmp��ʱ����
//	printf("a=%d b=%d\n", a, b);
//	//Swap(a, b);
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//		printf("a=%d b=%d\n",a,b);
//		
//	return 0;
//
//}

//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max=get_max(a, b);
//	printf("max=%d\n",max);
//	return 0;
//
//}
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n",arr);
//	return 0;
//}
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//		printf("%s\n",arr2);
//
//
//	return 0;
//}
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n",sum);
//	return 0;
//}
//{
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//		//ȷ����ӡ9��
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//		return 0;
//	//9*9�˷��ھ���
//}
                         
//{
//	int i = 0;
//	double sum = 0.0; 
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)//�ж�
//		count++;
//
//		if (i / 10 == 9)
//		count++;
//	}
//	printf("count=%d",count);
//	return 0;
//
//}
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//	    //�����жϵĹ���
//		//1.�Գ��� 
//		//a����b������һ������С�ڵ��ڿ�ƽ��i     16=2*8=4*4
//		//sqrt--��ƽ������ѧ�⺯��
//		int a = 0;
//		for (a = 2; a <=sqrt(i); a++)
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		if (a >sqrt(i))
//		{
//			count++;
//			printf("%d\n",i);
//		}
//	}
//	printf("\ncount=%d",count);
//	return 0;
//}
//{//�ж�year�Ƿ�Ϊ����
	//1.�ܱ�4�������Ҳ��ܱ�100������������
	//2.�ܱ�400������������ 
//	int year = 1000;
//	int count = 0;
//	for (year = 1000; year <=2000; year++)
//	{ 
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);//�ܱ�4�������Ҳ��ܱ�100������������
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d\n",year);
//			count++;
//		}
//	}
//	printf("cout=%d\n",count);
//	return 0;
//
//}
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d %d",&m,&n);
//	while (r=m % n)//շת�����
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i %3 == 0)
//			printf("%d\n",i);
//	}
//	return 0;
//
//}
//{
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d",&a,&b,&c);
	////�㷨ʵ��
	////a�з����ֵ
	////b��֮
	////c�з���Сֵ
	////tmp��ʱ����--->int tmp
	//if (a<b) 
	//{
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c)
	//{
	//	int tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b< c)
	//{
	//	int tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	//printf("%d %d %d\n",a,b,c);
//
//	return 0;
//
//}