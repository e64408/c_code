#include<stdio.h>
int global = 2022;
int main()
{
    //char 字符类型
    // %c 打印字符
    // %d 打印整型
    // %f 打印浮点数字——打小数
    // %p 以地址的形式打印
    // %x 打印16进制数字
    // %o 打印8进制数字
    //char ch = 'A';
   // printf("%c\n",ch);   //%c打印字符格式
   // int age = 20;
   // printf("%d\n",age);//%d打印整型十进制数据
    //long num = 100;
   // printf("%d\n", num);
    //printf("%d\n", sizeof(char));//
   // printf("%d\n", sizeof(short));//
    //printf("%d\n", sizeof(int));//
   // printf("%d\n", sizeof(long));//
    //printf("%d\n", sizeof(long long));//
   // printf("%d\n", sizeof(float));//一个字节8个比特位
   // printf("%d\n", sizeof(double));//
    //int b = 110;
    //printf("%d\n", a);
    //printf("%d\n", b);
    //int num1 = 0;
    //int num2 = 0;
    //int sum = 0;//c语言语法规定，变量要规定在当前代码块的最前面
    //输入数据-使用输入函数scanf
    //scanf_s("%d%d", &num1,&num2);//取地址符号&
    //sum = num1 + num2;
    //printf("sum=%d\n", sum);
    printf("%d\n", global);
    return 0;
}