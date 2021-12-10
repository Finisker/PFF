//
// Created by Maciej Płachta on 09.12.2021.
//

#include "../include/Bird.h"

void Bird::advance() {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber - 1; ++column) {
            matrix[row][column] = matrix[row][column + 1];
        }
        matrix[row][columnsNumber - 1] = 0;
    }
}

void Bird::addBird(int height) {
    if(height>-1 && height<4) {
        matrix[rowsNumber - height-4][columnsNumber - 1] = 1;
        matrix[rowsNumber - height-4][columnsNumber - 2] = 1;
    }
}

