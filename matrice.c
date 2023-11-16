#include "matrice.h"


Pmatrix create_matrix(int rows,int columns){

	Pmatrix new_matrix = (Pmatrix)malloc(sizeof(Matrix)); 	


	new_matrix->value = (unit*)malloc(sizeof(unit)*columns*rows);

	new_matrix->columns = columns;
	new_matrix->rows = rows;


	return new_matrix;
}

unit* get_pointer(Pmatrix matrix,int i,int j){
	return matrix->value+((i-1)*matrix->columns+j-1);
	
}

unit get_value(Pmatrix matrix,int i,int j){
	return *(matrix->value+( (i-1)*matrix->columns+(j-1)));
	
}

void destroy_matrix(Pmatrix matrix){
	free(matrix->value);
	free(matrix);
}

void view_matrix(Pmatrix matrix){
	printf("\n");
	for(int i = 0; i < matrix->rows;i++){
		printf("[");
		for(int j = 0; j < matrix->columns;j++){
			printf(" %Lf ",*(matrix->value+i*matrix->columns+j) );
		}
		printf("]\n");
	}
}


Pmatrix Product(Pmatrix A, Pmatrix B){
	Pmatrix C = create_matrix(A->rows,B->columns);

	for(int i = 1;i<=A->rows;i++){
		for(int j=1;j<=B->columns;j++){
			*get_pointer(C,i,j) = 0;
			for(int k = 1;k <= A->columns;k++){
				*get_pointer(C,i,j) += get_value(A,i,k)* get_value(B,k,j);
			}
		}
	}

	return C;
}


Pmatrix Transpose(Pmatrix matrix){
	Pmatrix result = create_matrix(matrix->columns,matrix->rows);
	for(int i = 1 ; i<=matrix->rows;i++){
		for(int j = 1; j <=matrix->columns;j++){
			*get_pointer(result,j,i) = get_value(matrix,i,j); 
		}
	}
	return result;
}







