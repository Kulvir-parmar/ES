

/*
connection of 7-seg 
	data     P0.16 to P0.23
	control  P0.8 to P0. 15
*/

#include"lpc214x.h"
#include"delay.h"

int main()
{
int a;
unsigned char arr[] = {0xbf, 0x86, 0xdb, 0xcf, 0xe6, 0xed, 0xfd, 0x87, 0xff, 0xef};
IODIR0 = 0xffffffff;
while(1)
 {  
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[6]<<16 | 0x0800;
	          delay_ms(2);
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[1]<<16 | 0x0400;
	          delay_ms(2);
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[9]<<16 | 0x0200;
	          delay_ms(2);
	          IOCLR0 = 0xFFFFFFFF;
	          IOSET0 = arr[0]<<16 | 0x0100;
	          delay_ms(2);      
		 }
}
//unsigned char arr[] = {0xbf, 0x86, 0xdb, 0xcf, 0xe6, 0xed, 0xfd, 0x87, 0xff, 0xef};

