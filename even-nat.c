#include<stdio.h>
void main()
{
int even,num,sum;
printf("Enter the number :");
scanf("%d",&num);
for(int i=1;i<=num;i++){
if(i%2==0){
 even=i;
sum=sum+even;
 printf("%d\n",i);
}
}
printf("The sum of 1st n even numbers is=%d\n",sum);

}
