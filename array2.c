#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    float average,sum=0;
    printf("\nEnter the size of array");
    scanf("%d", &n, &i);
    int arr[i];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum=sum+arr[i];
    }
    average=sum/n;
    printf("%f", average);
    return 0;
}