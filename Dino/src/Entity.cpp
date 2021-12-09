//
// Created by Maciej Płachta on 09.12.2021.
//

#include "../include/Entity.h"

Entity::Entity() {
    matrix = new int *[rowsNumber];
    for (int row = 0; row < rowsNumber; ++row) {
        matrix[row] = new int[columnsNumber];
        for (int column = 0; column < columnsNumber; ++column) {
            matrix[row][column] = 0;
        }
    }
}

Entity::~Entity() {
    for (int row = 0; row < rowsNumber; ++row) {
        delete matrix[row];
    }
    delete matrix;
}

int Entity::getRowsNumber() const {
    return rowsNumber;
}

int Entity::getColumnsNumber() const {
    return columnsNumber;
}

void Entity::clearMatrix() {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber; ++column) {
            matrix[row][column] = 0;
        }
    }
}

int **Entity::getMatrix() {
    return matrix;
}
