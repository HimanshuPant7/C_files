#include <stdio.h>
unsigned long PrimeFac(unsigned long);
unsigned long num,k,i;
unsigned long main()
{
    
    printf("Enter a number: ");
    scanf("%d", &num);
    PrimeFac(num);
    return 0;

}
unsigned long PrimeFac(unsigned long num)
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
