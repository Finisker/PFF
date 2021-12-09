//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef DINO_DINO_H
#define DINO_DINO_H

#include "Entity.h"

class Dino : public Entity {

private:
    int status;
public:
    void setMatrix();

    int getStatus();

    void setStatus();

    void jump();

    void duck();

};


#endif //DINO_DINO_H
