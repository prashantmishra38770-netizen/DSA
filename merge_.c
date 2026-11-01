#include<stdio.h>
int arr1[4]={8,12,35,31};
int arr2[4]={17,32,40,42};
int newarr[8];
int i=0,j=0,n=0;
while(i<4 && j<4){
    if(arr1[i]<arr2[j]){
        newarr[n]=arr1[i];
        i++;
        n++;

    }
    else{
        newarr[n]=arr2[j];
        j++;
        n++;

    }
}
while(i<4){
    newarr[n]=arr1[i];
    i++;
    n++;
}
while(j<4){
    newarr[n]=arr2[j];
    j++;
    n++;
}
for(i=0;i<8;i++){
    printf("%d ",newarr[i]);
}
