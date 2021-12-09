//
// Created by Maciej Płachta on 09.12.2021.
//

#include "../include/Cactus.h"

int Cactus::getCactusHeight() const {
    return cactusHeight;
}

void Cactus::setCactusHeight(int height) {
    if (height > 0 && height < 4) {
        this->cactusHeight = height;
    } else {
        this->cactusHeight = 0;
    }
}

void Cactus::setMatrix() {
    switch (this->cactusHeight) {
        case 1:
            matrix[rowsNumber - 1][columnsNumber - 1] = 1;
            break;
        case 2:
            matrix[rowsNumber - 1][columnsNumber - 1] = 1;
            matrix[rowsNumber - 2][columnsNumber - 1] = 1;
            break;
        case 3:
            matrix[rowsNumber - 1][columnsNumber - 1] = 1;
            matrix[rowsNumber - 2][columnsNumber - 1] = 1;
            matrix[rowsNumber - 3][columnsNumber - 1] = 1;
            break;
        default:
            break;
    }
}

void Cactus::advance() {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber - 1; ++column) {
            matrix[row][column] = matrix[row][column + 1];
        }
        matrix[row][columnsNumber - 1] = 0;
    }
}

