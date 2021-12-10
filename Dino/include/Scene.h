//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef PFF_SCENE_H
#define PFF_SCENE_H

#include "Entity.h"
#include "Bird.h"
#include "Dino.h"
#include "Cactus.h"

class Scene : public Entity {
public:

    void clear();

    void addMatrix(Bird* bird);

    void addMatrix(Cactus* cactus);

    void addMatrix(Dino* dino);

    void addMatrix(int **matrix);

    void addFloor();
};


#endif //PFF_SCENE_H
