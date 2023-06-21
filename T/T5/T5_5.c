#include <stdio.h>

int x;

void func_a( void );
void func_b( void );
void func_c( int );
int func_d( int );

int main( void )
{
	int y;

	x = 10;
	y = 50;

	printf( "(main) x = %3d, y = %3d\n", x, y );

	func_a( );

	printf( "(main) x = %3d, y = %3d\n", x, y );

	func_b( );

	printf( "(main) x = %3d, y = %3d\n", x, y );

	func_c( y );

	printf( "(main) x = %3d, y = %3d\n", x, y );

	y = func_d( y );

	printf( "(main) x = %3d, y = %3d\n", x, y );

	return 0;
}

void func_a( void )
{
	int y;

	y = 100;
	x += 5;

	printf( "(func) x = %3d, y = %3d\n", x, y );
}

void func_b( void )
{
	int y;

	y = 100;
	y += 5;

	printf( "(func) x = %3d, y = %3d\n", x, y );
}

void func_c( int y )
{
	x += 10;
	y += 10;

	printf( "(func) x = %3d, y = %3d\n", x, y );
}

int func_d( int y )
{
	x += 20;
	y += 20;

	printf( "(func) x = %3d, y = %3d\n", x, y );

	return y;
}