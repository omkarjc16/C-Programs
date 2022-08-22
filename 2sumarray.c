#include<stdio.h>
void main()
{
int a[2][3];
int i,j, sum ;
for(i=1;i<=2;i++){

 for(j=1;j<=3;j++){
printf("Enter the value :");


 scanf("%d",&a[i][j]);

 sum=sum*a[i][j];
 }

 }
 printf("%d",sum);

}
