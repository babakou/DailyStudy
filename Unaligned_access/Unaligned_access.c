#include <stdio.h>

int main( void )
{
	char fifo[] = {0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0};
	int i;

	for( i = 0; i < 5; i++ )
	{
		printf( "0x%x\n", *(unsigned int*)(fifo + i) );
	}

	return 0;
}
