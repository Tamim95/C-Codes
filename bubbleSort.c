#include<stdio.h>

int main()
{
    int i,j,temp;
    int a[5]={2,3,1,5,4};

    for(i=0;i<5;i++)//row
    {
        for(j=i+1;j<5;j++)//collumn 
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)

        printf("%d ",a[i]);

    return 0;
}
