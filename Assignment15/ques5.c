//Write a function to find first occurrence of adajacent duplicate values in the array
#include<stdio.h>
int findAdjacentDuplicate(int a[],int size)
{
    for(int i=1;i<size;i++)
    {
            if(a[i]==a[i-1])
            {
                return i-1;
            }
     
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,3,4,4,5,6};

    int index=findAdjacentDuplicate(a,8);
    if(index!=-1)
        printf("First adjacent duplicate found at index %d\n",index);
    else
        printf("No adjacent duplicate found\n");
    return 0;
}