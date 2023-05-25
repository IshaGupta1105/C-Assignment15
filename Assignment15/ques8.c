//Write a function to print all unique element in array.
#include<stdio.h>
void duplicateNumber(int a[],int size)
{
    int hash[10]={0},i;
    for(i=0;i<10;i++)
    {
        hash[a[i]]++;
    }
   for(int i=0;i<size;i++)
   {
    if(hash[i]==1)
    printf("%d ",i);
   }
}
int main()
{
    int a[]={1,2,3,5,2,4,6,8,5,6};
    duplicateNumber(a,10);
    return 0;
}