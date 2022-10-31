#include<stdio.h>

int main(){

int size,array[100],i;
printf("enter the elemnts in array : ");
scanf("%d",&size);
printf("enter the array  : ");
for(i=0;i<size;i++){
    scanf("%d",&array[i]);
}
printf("your array is : ");
for(i=0;i<size;i++){
    scanf("%d",array[i]);
}






    return 0;
}