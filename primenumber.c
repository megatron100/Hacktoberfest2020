#include <stdio.h>

int a,i,j;
int main() {

for(i=2;i<100000;i++)
{
    int n=0;
    for(j=2;j<i;j++)
    {
        
      a=i%j;
        if(a==0)
        {
           break;
               
        }
        else { n++;}
    }
    if (n==i-2)
    { printf("%d\n",i);}
}

    return 0;
}