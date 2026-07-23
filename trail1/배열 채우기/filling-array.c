#include <stdio.h>

int main() {

    int arr[10];
    int j=0;
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        j++;
        if(arr[i]==0)
        {
            break;
        }   
    }
    
    for(i=i-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    
    // Please write your code here.
    return 0;
}