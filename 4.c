#include<stdio.h>
    void main(){
                   int n, s1, s2, z;
                   printf(" How many Integer numbers : ");
                   scanf("%d", &n);
                   z=n;
                   if(n>0){
                   printf("\n Enter the First number : ");
                   scanf("%d", &s1);
                   n--;
                   if(n>0){
                   for(;n>=1; n--){
                   printf("\n Enter the next number : ");
                   scanf("%d", &s2);
                   if(s1>s2)
                   s1=s2;
                   }
                   }
                   }
    printf("\n The Smallest of %d numbers is %d", z, s1);
    }
