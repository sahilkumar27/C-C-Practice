#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y){
        printf("Yes x is contained in y");
    }
    int i=0;
    int n=y;
    int ans=0;
    while(n!=0){
        int rem=n%10;
        n=n/10;
        ans=ans+rem*pow(10,i);
        if(ans==x){
            printf("Yes x is contained in y");
            break;
        }
        i++;
    }
    if(n==0){
    printf("No x is not contained in y");
    }
}