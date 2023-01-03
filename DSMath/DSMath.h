/**********************************************************************************************

Mathematics library for coding writen in c 

**********************************************************************************************/

#ifndef DSMATH_H
#define DSMATH_H

#define DSMATH_MATRIX_TYPE
// Matrix type
typedef struct {
    unsingd int rows;
    unsingd int cols;
    double *data;
}Matrix;
#endif // DSMATH_MATRIX_TYPE

Matrix newMatrix(unsingd int rows, unsingd int cols, double defaultValue);
void freeMatrix(Matrix matrix);

#endif // DSMATH_H