//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef DINO_ENTITY_H
#define DINO_ENTITY_H


class Entity {
protected:
    int **matrix;
    int rowsNumber=10;
    int columnsNumber=30;
public:
    Entity();
    ~Entity();
    int** getMatrix();
    virtual void setMatrix();
};


#endif //DINO_ENTITY_H
