//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef DINO_BIRD_H
#define DINO_BIRD_H

#include "Entity.h"

class Bird : public Entity {
public:

    void addBird(int height);

    void advance();
};


#endif //DINO_BIRD_H
