#include <stdio.h>
int output_sum(int n);
int main()
{
    int n,Digsum;
    printf("Enter a number ");
    scanf("%d",&n);
    Digsum=output_sum(n);
    printf("The digit sum of the given number is %d",Digsum);

    return 0;
}
output_sum(int n)
{ if(n == 0)
        return 0;
        
    return ((n % 10) + output_sum(n / 10));}
