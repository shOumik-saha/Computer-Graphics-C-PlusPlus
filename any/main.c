#include <stdio.h>
int fun1(int x, int y)
{
     printf("i am inside x=%d,y=%d\n",x,y);
     return((x>y)?1:0);
}
int main()
{
     int a=10, b=10;
     if(a++,b--,fun1(b,a))
          printf("i am inside c and v of a=%d,b=%d\n",a,b);
     else
          printf("i am outside c and v of a=%d,b=%d\n",a,b);
}
