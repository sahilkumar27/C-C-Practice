#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,max=0;
    printf("\nEnter the size of array ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     printf("\n%d",max);

    return 0;
}