#include<stdio.h>
#include<iostream>
using namespace std;

int main() { 
    int a,b,c=1,d=0;  
    scanf("%d",&a); 
    while(a!=0){ 
        b=a%2; 
        a=a/2; 
        d=d+b*c; 
        c=c*10; 
    } 
    printf("%d",d); 
    return 0; 
} 
