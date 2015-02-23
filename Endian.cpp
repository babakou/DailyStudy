#include <stdio.h>

int main( void )
{
	unsigned int val = 0x78563412;

	char* v = (char*)&val;
	int i;

	for( i = 0; i < sizeof( val ); i++ )
	{
		printf( "0x%x\n", v[i] );
	}

	printf( "0x%x", val );

	return 0;
}
