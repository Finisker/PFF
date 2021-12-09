//
// Created by Maciej Płachta on 09.12.2021.
//

#include "../include/Dino.h"

int Dino::getStatus() {
    return this->status;
}

void Dino::setMatrix() {
    this->matrix[rowsNumber-1][3]=1;
    this->matrix[rowsNumber-2][3]=1;
    this->matrix[rowsNumber-3][3]=1;
}
