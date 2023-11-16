#include "neurone.h"

void Sigmoide(Pmatrix matrix){

	for(int i=1;i<=matrix->rows*matrix->columns;i++){
		*(matrix->value+i-1)=(1/(1+exp(- *(matrix->value+i-1))));
	}
	


}


float LogLoss(Pmatrix A, Pmatrix Y){
	float result = 0;
	for(int m =1;m<=A->rows;m++){
		result += *(Y->value+m-1)*log(*(A->value+m-1)) + (1-*(Y->value+m-1))*log(1-*(A->value+m-1)); // Yi * log(Ai) + (1-Yi) * log(1-Ai) for i = 1->m
	}
	result /= -A->rows;
	return result;
}