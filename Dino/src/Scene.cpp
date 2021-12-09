//
// Created by Maciej Płachta on 09.12.2021.
//

#include "Scene.h"

void Scene::addMatrix(int **matrix) {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber; ++column) {
            this->matrix[row][column] += matrix[row][column];
        }
    }
}

void Scene::setMatrix() {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber; ++column) {
            matrix[row][column] = 0;
        }
    }
}
