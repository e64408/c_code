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
		printf("������:>");
		scanf("%s", password);
		if(strcmp(password,"123456")==0)//==���������ж������ַ����Ƿ����
		{                           //Ӧ��ʹ��һ���⺯��-strcmp
			printf("��½�ɹ�");
			break;
		}

	}
	if (i == 3)
	{
		printf("��½ʧ��");
	}

	return 0;

}
//{
//	int k =6;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("�Ҳ���");
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

//�۰�����㷨
//���ֲ����㷨    log��2Ϊ�׵�n
// 
//{
//	int i = 0;
//	   //��ʼ��    �ж�   ����
//	for (i = 1 ; i <= 10 ; i++)
//	{
//		printf("%d\n",i);
//	}
//
//
//	return 0;
//}
//forѭ����ò���ǰ�������������ʽ
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
//	//EOF--end of file �ļ�������־
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	
//	int ret = 0;
//	char password[20] = {0};
//	printf("���������룺>");
//	scanf("%s",password);//�������룬�������password������
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����>");
//	//��������ʣ��һ��'\n'
//	//��ȡһ��\n
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}