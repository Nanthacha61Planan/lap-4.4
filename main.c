#include <stdio.h>

int main(void) {
  int pc;
  float L1,L2,area,height,sumL;
  printf("Enter L1:");
  scanf("%f", &L1);
  printf("Enter L2:");
  scanf("%f", &L2);
  printf("Enter height:");
  scanf("%f", &height);
  pc = (L2/L1)*100;
  printf("L2 = %d % \n",pc);
  sumL = L1+L2;
  if(pc >= 40) {
  area = 0.5*height*sumL;
  printf("Area =  %0.2f", area);
  }
  return 0;
}