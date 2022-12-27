#include <stdio.h>

int main(){
    int input_n;
    scanf("%d",&input_n);
    int a = 0, b=1,c;
    for(int i=0;i<input_n-1;i++){
        c=b+a;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}

