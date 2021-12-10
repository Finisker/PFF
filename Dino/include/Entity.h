//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef DINO_ENTITY_H
#define DINO_ENTITY_H

class Entity {
protected:
    int **matrix;
    int rowsNumber = 8;
    int columnsNumber = 60;
public:
    Entity();

    ~Entity();

    int **getMatrix();

    int getRowsNumber() const;

    int getColumnsNumber() const;
};


#endif //DINO_ENTITY_H
