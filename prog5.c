#include<stdio.h>
int main(){
int a,b,c,d;
int sp=a*b,cp=a*c,p=sp-cp,tp=sp-cp-d;
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("no of copies=%d",a);
printf("selling price=%d",b);
printf("cost price=%d",c);
printf("total selling price=%d",sp);
printf("total cost price=%d",cp);
printf("rent=%d",d);
printf("profit=%d",p);
printf("total profit=%d",tp);
}
