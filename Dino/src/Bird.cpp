//
// Created by Maciej Płachta on 09.12.2021.
//

#include "../include/Bird.h"

void Bird::setBirdHeight(int height) {
    if (height > 2 && height < 7) {
        this->birdHeight = height;
    } else {
        this->birdHeight = 0;
    }
}

int Bird::getBirdHeight() const {
    return this->birdHeight;
}

void Bird::advance() {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber - 1; ++column) {
            matrix[row][column] = matrix[row][column + 1];
        }
        matrix[row][columnsNumber - 1] = 0;
    }
}

void Bird::setMatrix() {
    matrix[rowsNumber-birdHeight][columnsNumber - 1] = 1;
    matrix[rowsNumber-birdHeight][columnsNumber - 2] = 1;
}

