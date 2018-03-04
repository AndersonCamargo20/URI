#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
 int n,i, j;
 char c[6];

 scanf("%d",&n);
 if (n<=1000){
    for(i=1;i<=n;i++)
    {
          scanf("%s", &c);
          if (strlen(c)<=3){
          if(c[0]=='o' && c[1]=='n' || c[1]=='n' && c[2]=='e' || c[0]=='o' && c[2]=='e')
             printf("1\n");

          else
             printf("2\n");
       }
       else
       printf("3\n");
   }
}
return 0;
}
