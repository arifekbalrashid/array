#include<stdio.h>
void doWork(int a,int b,int *sum,int *prod,int *avg);
int main()
{
    int a = 190,b= 226;
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);
    printf("sum= %d\n , prod = %d\n ,Avg = %d\n",sum ,prod ,avg);
    return 0;
}
void doWork(int a,int b,int *sum,int *prod,int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2 ;
}
