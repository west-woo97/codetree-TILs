#include <stdio.h>

int main() {

    int arr[11];
    int sum=0;

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("%d",sum);

    // Please write your code here.
    return 0;
}