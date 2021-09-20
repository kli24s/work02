#include <stdio.h>

int main() {

  printf("=============================================\n");

  int var0 = 1;
  double var1 = 1.0;
  printf("An int (%d) and a double (%lf).", var0, var1);

  printf("\n=============================================\n");

  char var2[] = "String 1";
  char var3[] = {'S','t','r','i','n','g',' ','2','\0'};
  printf("Strings, two ways:\nString 1: %s\nString 2: %s\n", var2, var3);

  char var4 = '!';
  printf("%c%c%c%c%c%cs%c%c", var2[0], var3[1], var2[2], var3[3], var2[4], var3[5], var4, var4);

  printf("\n=============================================\n");

  float var5 = 3.1415926535897;
  char var6[] = "π";
  printf("Pi, two ways:\nPi: %0.2f\nPi: %s", var5, var6);

  printf("\n=============================================\n");

  unsigned int var7 = 0;
  int var8 = var7 - 1;
  int var9 = 0 - 1;
  unsigned int var10 = 0 - 1;
  unsigned int var11 = var10 - 1;
  printf(" unsigned int var7 = %u\n", var7);
  printf("          int var8 = var7 - 1  = %d\n", var8);
  printf("          int var9 = 0 - 1     = %d\n", var9);
  printf("unsigned int var10 = 0 - 1     = %u\n", var10);
  printf("unsigned int var11 = var10 - 1 = %u\n", var11);

  printf("=============================================\n");

  return 0;
}
