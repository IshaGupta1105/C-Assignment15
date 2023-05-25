//Write a function to find smallest number from the given array of any size.(TSRS)
#include<stdio.h>
int smallestNum(int x[],int size)
{
    int min,i;
    for(i=0;i<size;i++)
    {
        if(x[i]<min)
        {
             min=x[i];
        }
    }
    return min;
}
int main()
{
    int a[]={4,2,6,7,5,1};
    printf("%d",smallestNum(a,6));
    return 0;
}