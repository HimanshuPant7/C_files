#include <stdio.h>
int PrimeFac(int);
int num,k,i;
int main()
{
    
    printf("Enter a number: ");
    scanf("%d", &num);
    PrimeFac(num);
    return 0;

}
int PrimeFac(int num)
{
    i=2;
    while (i<=num)
    {
        if(num%i==0)
        {   printf("%d\t",i);
            num=num/i;
            continue;
        }
        else
            i++;
    }
}
