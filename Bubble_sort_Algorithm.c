#include<stdio.h>
int bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int i,n,A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sort=bubble_sort(A,n);
    for(i=0;i<n;i++){
     printf("%d ",A[i]);
}
    return 0;
}
