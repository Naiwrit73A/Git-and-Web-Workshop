#include<stdio.h>

void fibonacci(int n)
{
    int f1 = 0, f2 = 1;
    printf("%d %d ",f1,f2);
    while(n--)
    {
        printf("%d ",f1+f2);
        int temp = f1;
        f1 = f2;
        f2 = temp + f1;
    }
}

int main()
{
    int n;
    printf("Enter the value of range \"n\" : ");
    scanf("%d",&n);
    printf("Output: ");
    fibonacci(n -= 2);
    return 0;
}