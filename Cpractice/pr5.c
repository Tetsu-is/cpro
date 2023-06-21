#include <stdio.h>

void calc_points (double res[3][5], double sum[3], double avg[5])
{
	double tempsum = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			tempsum += res[i][j];
		}
		sum[i] = tempsum;
		tempsum = 0;
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			tempsum += res[j][i];
		}
		avg[i] = tempsum/3;
		tempsum = 0;
	}
}

int main(void)
{
	double test_result[3][5] ={{80, 70, 40, 60, 80},{0, 90, 60, 40, 30},{0, 40, 70, 60, 50}};
	double sum[3];
	double average[5];
	calc_points(test_result, sum, average);	
	for(int i=0; i<3; i++){
		printf("%3.0f ",sum[i]);
	}
	printf("\n");
	for(int i=0; i<5; i++){
		printf("%2.1f ",average[i]);
	}
	return 0;
}