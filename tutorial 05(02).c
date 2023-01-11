#include<stdio.h>

void main(){
    int x, y, z, max;

    printf("Enter values for x, y and z respectively: ");
    scanf("%d %d %d",&x,&y,&z);

    max = (x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("%d",max);
}
