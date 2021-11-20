#include <stdio.h>
int main()
{
    int x=0, z=0, k=50;
    float y=0;
    printf("Enter the number of over bowled so far\n");
    scanf("%d", &x);
    k=k-x;
    printf("Enter the current run rate\n");
    scanf("%f", &y);
    printf("Enter the target score\n");
    scanf("%d", &z);
    printf("Required run rate is %0.2f", (z-(y*x)/k));

    return 0;

}