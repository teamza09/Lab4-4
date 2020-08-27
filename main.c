#include <stdio.h>
int main(void) {
  float L1, L2, Height, SumL, Area, P;
  printf("Enter L1 : ");
  scanf("%f",&L1);
  printf("Enter L2 : ");
  scanf("%f",&L2);
  printf("Enter Height : ");
  scanf("%f",&Height);
  P = ((L2-L1)/L2)*100;
  if(P >= 40)
  {
    SumL = L1+L2;
    Area = Height*SumL*1/2;
    printf("Area  = %0.1f",Area);
  }
  else
  {
    printf("L1 < L2 40 %%");
  }
  return 0;
}
