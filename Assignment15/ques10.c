//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void countFrequency(int a[],int size)
{
    int hash[100]={0},i;
    for(i=0;i<10;i++)
         hash[a[i]]++;
    for(i=0;i<100;i++)
    {
        if(hash[i]!=0)
        {
            printf("%d --> %d\n",i,hash[i]);
        }
    } 
}
int main()
{
    int a[]={1,3,2,2,4,5,6,7,4,3};
    countFrequency(a,100);
    
    return 0;
}