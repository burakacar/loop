//Burak Acar
#include <stdio.h>
void k(void)
{
 int x;
 *(&x+2)-=31;
}
int main(void)
{
 int y=0;
 if(y<10){
 printf("loop=\n");
 y++;}
 k();
return 0;
}


