#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a ,&b);
    if (b>a){
        int k =b;
        b=a;
        a=k;
    }
    while (b>0){
        c=b;
        b=a%b;
        a=c;
    }
    printf("The GCD is %d", a);
}