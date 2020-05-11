#include <stdio.h>

int sum=0, val , num =0;
double ave;

int main()
{
while(scanf("%d\n",&val ) != EOF){
sum += val;
num++;
}
if  (num > 0){
ave = sum/num;
printf("Average is %f\n", ave);
}
}

