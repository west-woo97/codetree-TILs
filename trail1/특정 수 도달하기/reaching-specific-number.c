#include <stdio.h>

int main() {

    int arr[10];
    int sum=0;
    double avg=0;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        
        if(arr[i]>=250)
        {
            avg = (double)sum/i;
            printf("%d %.1f",sum,avg);
            break;
        }
        sum+=arr[i];
        if(i==9)
        {
            avg = (double)sum/10;
            printf("%d %.1f",sum,avg);
            break;
        }
        
    }
    // Please write your code here.
    return 0;
}