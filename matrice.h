#ifndef MATRICE_H
#define MATRICE_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h> 

//types declaration
typedef long double unit;

typedef struct matrix {
	unit* value;
	int rows;
	int columns;
}Matrix;

typedef Matrix* Pmatrix;

//functions declaration
Pmatrix create_matrix(int rows,int columns);
unit* get_pointer(Pmatrix matrix,int i,int j);
unit get_value(Pmatrix matrix,int i,int j);
void destroy_matrix(Pmatrix matrix);
void view_matrix(Pmatrix matrix);
Pmatrix Product(Pmatrix A, Pmatrix B);
Pmatrix Transpose(Pmatrix matrix);

#endif