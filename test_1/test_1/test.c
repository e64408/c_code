#include<stdio.h>
int global = 2022;
int main()
{
    //char �ַ�����
    // %c ��ӡ�ַ�
    // %d ��ӡ����
    // %f ��ӡ�������֡�����С��
    // %p �Ե�ַ����ʽ��ӡ
    // %x ��ӡ16��������
    // %o ��ӡ8��������
    //char ch = 'A';
   // printf("%c\n",ch);   //%c��ӡ�ַ���ʽ
   // int age = 20;
   // printf("%d\n",age);//%d��ӡ����ʮ��������
    //long num = 100;
   // printf("%d\n", num);
    //printf("%d\n", sizeof(char));//
   // printf("%d\n", sizeof(short));//
    //printf("%d\n", sizeof(int));//
   // printf("%d\n", sizeof(long));//
    //printf("%d\n", sizeof(long long));//
   // printf("%d\n", sizeof(float));//һ���ֽ�8������λ
   // printf("%d\n", sizeof(double));//
    //int b = 110;
    //printf("%d\n", a);
    //printf("%d\n", b);
    //int num1 = 0;
    //int num2 = 0;
    //int sum = 0;//c�����﷨�涨������Ҫ�涨�ڵ�ǰ��������ǰ��
    //��������-ʹ�����뺯��scanf
    //scanf_s("%d%d", &num1,&num2);//ȡ��ַ����&
    //sum = num1 + num2;
    //printf("sum=%d\n", sum);
    printf("%d\n", global);
    return 0;
}