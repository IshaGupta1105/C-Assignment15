//Write C  function to count a total number of duplicate elements in an array.(Elements that occurs twice in array)
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
    if(hash[i]==2)
    printf("%d ",i);
   }
}
int main()
{
    int a[]={1,2,3,5,2,4,6,8,5,6};
    duplicateNumber(a,10);
    return 0;
}