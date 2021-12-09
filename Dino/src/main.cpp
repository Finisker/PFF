//
// Created by Maciej Płachta on 09.12.2021.
//

#include <iostream>
#include "Entity.h"
#include "Scene.h"

using namespace std;

void drawScene(Scene scene);

void printMatrix(int** matrix);

int main(){

    auto bird = new Bird;
    auto cactus = new Cactus;
    cactus->setCactusHeight(1);
    bird->setBirdHeight(4);
    printMatrix(bird)



    return 0;
}

void drawScene(Scene scene){

}

void printMatrix(int** matrix, int rowsNumber, int columnsNumber){
    for (int row = 0; row < rowsNumber; ++row) {
        for (int column = 0; column < columnsNumber; ++column) {
            cout<<matrix[row][column];
        }
        cout<<endl;
    }
}