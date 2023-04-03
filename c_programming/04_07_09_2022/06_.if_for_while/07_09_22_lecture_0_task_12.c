/*12. Напишете програма, която отпечатва първите n реда от триъгълника на Флойд, където
n се въвежда
1
01
101
0101
10101*/
#include<stdio.h>


int main() {
	int iNumbersOfRows;
	scanf("%d", &iNumbersOfRows);
	int i, j;
	
	for(i = 0; i < iNumbersOfRows; i++) {
		for(j = 0; j <= i; j++) {
			if((i + j) % 2 == 0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	
	return 0;
}


