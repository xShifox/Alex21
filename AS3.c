#include <stdio.h>
void swapf(int ,int );
int main()
{
   int x, y;
   
   printf("Input two Numbers (x & y) to swap\n");
   scanf("%d%d", &x, &y);
   printf("Before swap x = %d\t y = %d\n",x,y);
	swapf(x,y);

   
   return 0;
}
void swapf(int x,int y){
   x = x + y;
   y = x - y;
   x = x - y;
   printf("After swap x = %d\t y = %d",x,y);
}
