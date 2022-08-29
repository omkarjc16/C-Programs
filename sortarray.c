#include<stdio.h>
void main(){
int i,j,s;
int a[8]={4,7,1,88,54,0,3,78};
for(i=0;i<8;i++){
for(j=0;j<8;j++){
if(a[i]<a[j]){
s=a[i];
a[i]=a[j];
a[j]=s;
}
}
}
for(i=0;i<8;i++){
printf("%d\n",a[i]);
}
}

