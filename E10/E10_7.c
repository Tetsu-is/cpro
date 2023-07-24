#include <stdio.h>
#include <math.h>

#define FULL 10
#define N 50  /*  使用しない場合は削除すること */

int main ( void ) 
{

	int freq[ FULL+1 ] = { 1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4 };    /* 点数が i である学生の人数を格納する配列 freq */
	double  sum = 0;
	double avg = 0;
	double var = 0;
	
	//平均
	for(int i=0; i<FULL+1; i++)
	{
		sum += i*freq[i];
	}
	avg = (double)sum/50;
	sum = 0;
	
	//分散
	for(int i=0; i<FULL+1; i++)
	{
		sum += ((avg - i)*(avg - i))*freq[i];
	}
	var = sum/50;
	
	//標準偏差
	double st = sqrt(var);
	printf("平均は%f\n", avg);
	printf("分散は%f\n", var);
	printf("標準偏差は%f\n", st);
	
	//偏差値
	double hensati = 0; 
	for(int i=0; i<FULL+1; i++)
	{
		hensati = 10 * (i - avg)/st + 50;
		printf("%d点の人の偏差値は%4.2f\n", i, hensati);
	}
	return 0;

}