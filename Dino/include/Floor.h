//
// Created by Maciej Płachta on 02.12.2021.
//

#ifndef DINO_FLOOR_H
#define DINO_FLOOR_H

#include "Entity.h"

class Floor : public Entity {
public:
    int **getMatrix() override;

    void setMatrix() override;

    void clearMatrix() override;

    void printMatrix() override;

};


#endif //DINO_FLOOR_H
