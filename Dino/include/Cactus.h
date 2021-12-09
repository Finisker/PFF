//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef DINO_CACTUS_H
#define DINO_CACTUS_H

#include "Entity.h"

class Cactus : public Entity {
private:
    int cactusHeight;
public:

    void setCactusHeight(int height);

    int getCactusHeight() const;

    void setMatrix() override;

    void advance();
};


#endif //DINO_CACTUS_H
