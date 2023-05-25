//Write a function to sort an array of any size (TSRN).
#include<stdio.h>
void sort(int x[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
         for(j=0;j<size-1;j++)
         {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
         }
    }
    printf("Sorted Array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int a[]={4,2,8,6,9,1};
    sort(a,6);
    return 0;
}