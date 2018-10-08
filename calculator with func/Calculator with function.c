#include<stdio.h>
int addfun(int a,int b)
{
    return a+b;
}
int subfun(int a,int b)
{ if(a>b)
    return a-b;
    else
        return b-a;
}
int multfun(int a,int b)
{
    return a*b;
}
int divfun(int a,int b)
{
    return a/b;
}
int modulusfun(int a,int b)
{
    return a%b;
}
void main()
{
    int a,b;
    printf("Enter two value input: ");
    scanf("%d%d",&a,&b);
    printf("add %d\n",addfun(a,b));
    printf("sub %d\n",subfun(a,b));
    printf("mult %d\n",multfun(a,b));
    printf("divided %d\n",divfun(a,b));
    printf("modulus %d\n",modulusfun(a,b));
}
