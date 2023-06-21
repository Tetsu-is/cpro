#include <stdio.h>

int a;

void inc( int );
void set_a( int );
int get_a( void );

int main( void )
{
	int a, b, c;

	a = 10;
	b = 20;

	set_a( 100 );

	inc( a );

	printf( "(main 1) a = %3d\n", a );

	inc( b );

	printf( "(main 2) b = %3d\n", b );

	c = get_a();

	printf( "(main 3) c = %3d\n", c );

	return 0;
}

void inc( int b )
{
	a++;
	b++;

	printf( "(inc  1) a = %3d\n", a );
	printf( "(inc  2) b = %3d\n", b );
}

void set_a( int v )
{
	a = v;
}

int get_a()
{
	return a;
}