#include <stdio.h>
int main()                                         
{
  int n1,n2,i,s;
  scanf("%d%d",&n1,&n2);
  for (i=1;i<=n2;i++) 
  {
      if(i%2!=0)
      {
        s=(n1*i);
        printf("%d x %d = %d
",n1,i,s);  
      }
  }
}