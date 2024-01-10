#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of times the pattern should be executed\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            print("%d",i);
        }
        printf("\n");
    }
}