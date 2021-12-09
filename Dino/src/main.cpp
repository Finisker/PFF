//
// Created by Maciej Płachta on 09.12.2021.
//

#include <iostream>
#include "Entity.h"
#include "Scene.h"

using namespace std;

void drawScene(Scene scene);

int main(){

    auto bird = new Bird;
    auto cactus = new Cactus;
    cactus->setCactusHeight(1);
    bird->setBirdHeight(4);



    return 0;
}

void drawScene(Scene scene){
    for (int row = 0; row < scene.getRowsNumber(); ++row) {
        for (int column = 0; column < scene.getColumnsNumber(); ++column) {
            scene.getMatrix()[row][column] = 0;
        }
    }
}