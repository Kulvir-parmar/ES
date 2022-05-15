

/*
connection of 7-seg 
	data     P0.16 to P0.23
	control  P0.8 to P0. 15
*/

#include"lpc214x.h"
#include"delay.h"

int main()
{
int a,b,c,d,e;
unsigned char arr[] = {0xbf, 0x86, 0xdb, 0xcf, 0xe6, 0xed, 0xfd, 0x87, 0xff, 0xef};
IODIR0 = 0xffffffff;
while(1)
 {  
for(a=0;a<=9;a++)
 {  
  for(b=0;b<=9;b++)
  {  
    for(c=0;c<=9;c++)
    {
	  for(d=0;d<=9;d++)
	  {  
	    for(e=0;e<=50;e++)
	    {
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[d]<<16 | 0x0100;
	          delay_ms(2);
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[c]<<16 | 0x0200;
	          delay_ms(2);
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[b]<<16 | 0x0400;
	          delay_ms(2);
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[a]<<16 | 0x0800;
	          delay_ms(2);      
		 }
       }
	 }
   }
 }
}
}
