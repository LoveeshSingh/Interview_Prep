#include <stdio.h>

void NGE(char *arr,int);
int main()
{
    char arr[5]={12,1,5,3,20};
    unsigned int n = sizeof(arr)/sizeof(arr[0]);
    NGE(arr,n);
}

void NGE(char *arr,int n)
{
    int i,j,great;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (arr[i] < arr[j])
            {
                great=arr[j];
                break;
            }
        }
        printf("NGE for element %d is %d \n",i,great);
    }
}