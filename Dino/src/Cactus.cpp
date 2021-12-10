//
// Created by Maciej Płachta on 09.12.2021.
//

#include "Cactus.h"

void Cactus::advance() {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber - 1; ++column) {
            matrix[row][column] = matrix[row][column + 1];
        }
        matrix[row][columnsNumber - 1] = 0;
    }
}

void Cactus::addCactus(int height) {
    switch (height) {
        case 1:
            matrix[rowsNumber - 2][columnsNumber - 1] = 1;
            break;
        case 2:
            matrix[rowsNumber - 2][columnsNumber - 1] = 1;
            matrix[rowsNumber - 3][columnsNumber - 1] = 1;
            break;
        case 3:
            matrix[rowsNumber - 2][columnsNumber - 1] = 1;
            matrix[rowsNumber - 3][columnsNumber - 1] = 1;
            matrix[rowsNumber - 4][columnsNumber - 1] = 1;
            break;
        default:
            break;
    }
}

