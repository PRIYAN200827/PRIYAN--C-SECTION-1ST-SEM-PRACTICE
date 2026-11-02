#include<stdio.h>
int main() {
int n;
scanf("%d",&n);
int a[n];int sum =0;int avg=0;
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
sum = sum+a[i];
avg = sum/n;
}printf("avg = %d",avg);
}
