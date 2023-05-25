//Write a C function to read n number of values in an array and display it in reverse order
#include<stdio.h>
void printArrayInReverse(int a[],int n)
{
    printf("\nThe array elements in reverse order:\n");
    for( int i=9; i>=0; i--)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[10],i;
    printf("Enter any 10 elements:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printArrayInReverse(a,10);
   return 0;
}



    