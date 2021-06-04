#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int
{
int i;
float pi=1,numerator,denominator,temp;
for(i=1;i<=n;i++)
 {
  numerator=(4*(i*i));
  denominator=(4*(i*i)-1);
  temp=numerator/denominator;
  pi=pi*temp;
 }
 return 2*pi;
}
float mc_pi(int n)
{
int circle=0;
float x,y;
for(int i=1;i<=n;i++)
  {
    x=frandom();
    y=frandom();
    if(x*x + y*y <= 1){circle++;}
  }
  return 4*((float)circle/n);
}

  
  
