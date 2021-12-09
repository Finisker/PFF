//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef DINO_ENTITY_H
#define DINO_ENTITY_H

#include "Bird.h"
#include "Dino.h"
#include "Cactus.h"

class Entity {
protected:
    int **matrix;
    int rowsNumber = 10;
    int columnsNumber = 30;
public:
    Entity();

    ~Entity();

    int **getMatrix();

    int getRowsNumber() const;

    int getColumnsNumber() const;

    virtual void setMatrix() = 0;

    void clearMatrix();
};


#endif //DINO_ENTITY_H
