//
// Created by Maciej Płachta on 02.12.2021.
//

#include "Floor.h"

void Floor::setMatrix() {
    this->matrix = new int *[this->rows];
    for (int row = 0; row < this->rows; ++row) {
        this->matrix[row] = new int[this->columns];
        for (int column = 0; column < this->columns; ++column) {
            if (row == 7) {
                this->matrix[row][column] = 1;
            } else {
                this->matrix[row][column] = 0;
            }
        }
    }
}

void Floor::clearMatrix() {
    for (int i = 0; i < this->columns; ++i) {
        delete (this->matrix[i]);
    }
    delete (this->matrix);
}

int **Floor::getMatrix() {
    return matrix;
}

void Floor::printMatrix() {
    for (int row = 0; row < this->rows; ++row) {
        for (int column = 0; column < this->columns; ++column) {
            cout<<this->matrix[row][column]<<" ";
        }
        cout<<endl;
    }
}
