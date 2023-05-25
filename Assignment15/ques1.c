//Write a function to find greatest number from the given array of any size.(TSRS)
#include<stdio.h>
int greatestNum(int x[],int size)
{
    int max=0,i;
    for(i=0;i<size;i++)
    {
        if(max<x[i])
        {
             max=x[i];
        }
    }
    return max;
}
int main()
{
    int a[]={4,2,6,7,5,1};
    printf("%d",greatestNum(a,6));
    return 0;
}