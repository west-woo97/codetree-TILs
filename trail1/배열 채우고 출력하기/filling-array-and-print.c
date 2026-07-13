#include <stdio.h>

int main() {

    char arr[20];
    int sum=0;

    for(int i=0;i<20;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(int j=18;j>=0;j-=2)
    {
        printf("%c",arr[j]);
    }

    // Please write your code here.
    return 0;
}