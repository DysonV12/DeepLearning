#include "main.h"
//gcc {main.c,matrice.c,neurone.h} -o test -Wall -Wextra -lm

int main(){
	Pmatrix A = create_matrix(2,2);
	for(int i =0;i<4;i++){
		*(A->value+i) = i;
	}

	view_matrix(A);
	destroy_matrix(A);
 	return 0;
}
