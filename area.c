#include <stdio.h>
#include<stdbool.h>

int main() {
    char c;
    while (scanf("%c",&c)!= EOF)
    {
        printf("%c\n",c);
    }
    
    return 0;
}
/*
int a=567432;
    while (a)
    {
        int z=a%10;
        printf("%d\n",z);
        a = a/10;
    }
*/