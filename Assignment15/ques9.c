//Write a function to merge two arrays of the same size sorted in desccending order
#include<stdio.h>

int main()
{
    int a[]={10,8,6,4,2};
    int b[]={9,7,5,3,1};
    int c[10];
    int i,j,k=0;
    for(i=0,j=0 ; i<5 && j<5;k++)
    {
        if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    if(i==5 && j!=5)
    {
        for( ; j<5;j++)
        c[k++]=b[j];
    }
    if(i!=5 && j==5)
    {
        for( ; i<5;i++)
        c[k++]=a[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
    
    return 0;
}