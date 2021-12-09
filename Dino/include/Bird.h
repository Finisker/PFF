//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef DINO_BIRD_H
#define DINO_BIRD_H
#include "Entity.h"

class Bird: public Entity{
private:
    int birdHeight;
public:

    void setBirdHeight(int height);

    int getBirdHeight() const;

    void setMatrix() override;

    void advance();
};


#endif //DINO_BIRD_H
