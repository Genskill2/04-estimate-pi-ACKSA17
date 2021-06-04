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

  
  
