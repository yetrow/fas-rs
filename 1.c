#include<stdio.h>//头文件 
int main()//主函数入口 
{
  int i,j; //定义变量 
  for(i=1;i<=9;i++)//外层for循环控制行 
  {
    for(j=1;j<=9;j++)//内层for循环控制列 
    {
      printf("%d*%d=%2d\t", i, j, i*j);// %4d 控制宽度为两个字符，且右对齐
    }
    printf("\n");//换行 
  }
  return 0;//函数返回值为0 
}