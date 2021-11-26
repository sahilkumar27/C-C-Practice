#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter the size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            printf("\n%d",arr[i]);
        }

    }
    return 0;

}