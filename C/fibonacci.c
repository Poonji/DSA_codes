#include <stdio.h>

int fib(int n)
{
    int a=0;int b=1;int c;
    for(int i=1;i<=n-1;i++);
    a=b;
    b=b+1;
    c=a+b;
    return c;
}
int main()
{
    int num;
    printf("enter the index\n");
    scanf("%d",&num);
    printf("the value of fibonacci series at position at %d is %d\n",num,fib(num));
    return 0;
}
