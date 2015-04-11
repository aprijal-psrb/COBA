#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[]){
	int A[3][3],i,j;
	printf("\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Masukkan Matriks A[%d][%d] : ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}