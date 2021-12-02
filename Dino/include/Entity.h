//
// Created by Maciej Płachta on 02.12.2021.
//

#ifndef DINO_ENTITY_H
#define DINO_ENTITY_H

#include <cstdio>
#include "iostream"

using namespace std;

class Entity {
protected:
    int columns = 30;
    int rows = 8;
    int **matrix;
public:
    virtual int **getMatrix() = 0;

    virtual void printMatrix() = 0;

    virtual void setMatrix() = 0;

    virtual void clearMatrix() = 0;

    virtual int getRows();

    virtual int getColumns();
};


#endif //DINO_ENTITY_H
