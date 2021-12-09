//
// Created by Maciej Płachta on 09.12.2021.
//

#ifndef PFF_SCENE_H
#define PFF_SCENE_H

#include "Entity.h"
#include "Bird.h"

class Scene : public Entity {
public:

    void add(Bird bird);

    void add(Cactus cactus);

    void add(Dino dino);

    void addMatrix(int** matrix);

    void setMatrix() override;

};


#endif //PFF_SCENE_H
