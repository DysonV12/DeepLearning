#ifndef NEURONE_H
#define NEURONE_H

#include <math.h>
#include "matrice.h"

void Sigmoide(Pmatrix matrix);
float LogLoss(Pmatrix A, Pmatrix Y);

#endif

