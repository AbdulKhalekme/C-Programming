#include<stdio.h>
int max_number(int A[],int n)
{
    int i,max=-999;
    for(i=0; i<n; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    printf("maximum number is: %d\n",max);
}
int min_number(int A[],int n)
{
    int min=999,i;
    for(i=0; i<n; i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    printf("minimum number is:%d\n",min);
}
int Average(int A[],int n)
{
    int sum=0,i;
    for(i=0; i<n; i++)
    {
        sum=sum+A[i];
    }
    sum=sum/n;
    printf("Average sum is:%d\n",sum);
}
int ascending_sort(int A[],int n)
{
    int i,j,min,temp;
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(A[j]<A[min]){
                min=j;
            }
        }

        if(min!=i)
        {
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
    printf("ascending order is:\n");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int descending_sort(int A[],int n)
{
    int i,j,max,temp;
    for(i=0; i<n; i++)
    {
        max=i;
        for(j=i+1; j<n; j++)
        {
            if(A[j]>A[max]){
                max=j;
            }
        }

        if(max!=i)
        {
            temp=A[i];
            A[i]=A[max];
            A[max]=temp;
        }
    }
    printf("\ndescending order is:\n");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int main()
{
    int n,i,A[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    int value= max_number(A,n);
    int valu= min_number(A,n);
    int avrge=Average(A,n);
    int sort=ascending_sort(A,n);
    int descend=descending_sort(A,n);
    return 0;
}
