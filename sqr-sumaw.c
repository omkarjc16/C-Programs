#include<stdio.h>
void main()
{
int sqr,num,sum;
printf("Enter the number :");
scanf("%d",&num);
for(int i=1;i<=num;i++){
sqr=i*i;
sum=sum+sqr;\
 printf("%d\n",sqr);
}

printf("The sum of 1st n numbers square is=%d\n",sum);

}
