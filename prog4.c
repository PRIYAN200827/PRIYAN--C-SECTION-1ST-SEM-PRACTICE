#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a>=90&&a<=100)
printf("A grade");
else if(a<90&&a>=70)
printf("grade B");
else if(a<70&&a>=50)
printf("grade C");
else if(a<50&&a>=0)
printf("grade D");
else 
printf("enter valid a");
}







