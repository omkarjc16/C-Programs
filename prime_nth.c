#include<stdio.h>
int main()
{

 int i, n=100,z;
 for (i=1;i<=n;i++ )
 {
  z=0;
  for(int j=2;j<=i/2;j++)
  {
  if(i%j==0)
  {
  z++;
  }
  }
  if(z==0 && i!=1)
  printf("%d\n",i);
 }
}
