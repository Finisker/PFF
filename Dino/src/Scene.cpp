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

void Scene::clear() {
    for (int row = 0; row < this->rowsNumber; ++row) {
        for (int column = 0; column < this->columnsNumber; ++column) {
            matrix[row][column] = 0;
        }
    }
}

void Scene::addMatrix(Bird* bird) {
    addMatrix(bird->getMatrix());
}

void Scene::addMatrix(Cactus* cactus) {
    addMatrix(cactus->getMatrix());
}

void Scene::addMatrix(Dino* dino) {
    addMatrix(dino->getMatrix());
}

void Scene::addFloor() {
    for(int i=0; i<this->columnsNumber;++i){
        this->matrix[this->rowsNumber-1][i]=-1;
    }
}
