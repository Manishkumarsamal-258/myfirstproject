#include<stdio.h>
void main (){
    int a[10],n,h,l,found=0,i,key;
    l=0;
    h=n-1;
    m=(l+h)/2;
    for(i=0;i<n;i++){
        if(key == a[m]){
            printf("element %d found in pos %d",key,m+1);
            found = 1;
            break;
        }
        if(key>a[m]){
            l=m+1;
        }
        if(key<a[m]){
            h=m-1;
        }
        m=(l+h)/2;
    }
    if(!found){
        printf("Element is not present");
    }
}