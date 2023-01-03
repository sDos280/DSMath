# include "DSMATH.h"

Matrix newMatrix(unsingd int rows, unsingd int cols, double defaultValue){
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    m.data = (double *)malloc(rows * cols * sizeof(double));

    for (unsingd int i = 0; i < rows; i++){
        for (unsingd int j = 0; j < cols; j++){
        m.data[i * rows + j] = defaultValue;
        }
    }

    return m;
}

void freeMatrix(Matrix matrix){
    free(matrix.data);
}