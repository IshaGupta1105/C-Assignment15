//Write a function to rotate an array by n position in d direction.The d is an indicative value for left or right.
// (For example if array of size 5 is {32,29,40,12,70}, n=2 and d is left, then resulting array after left rotation 2 times is{40,12,70,32,29})
#include<stdio.h>
void leftRotation(int a[],int size,int d)
{
    int temp,i,j;
   for(j=1;j<=d;j++)
   {
     temp=a[0];
    for(i=0;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    a[size-1]=temp;
   }

for(j=0;j<size;j++)
{
    printf("%d ",a[j]);
}
printf("\n\n");
}

int main()
{
    int a[]={32,29,40,12,70};
    leftRotation(a,5,2);
    return 0;
}