//
// Created by Maciej Płachta on 09.12.2021.
//

#include <iostream>
#include <thread>
#include <chrono>
#include "Scene.h"

using namespace std;

void drawScene(Scene* scene);

void drawFloor();

void printMatrix(int** matrix, int rowsNumber, int columnsNumber);

int main(){

    auto bird = new Bird;
    auto cactus = new Cactus;
    auto scene = new Scene;
    bird->addBird(1);
    cactus->addCactus(1);
    return 0;
}

void printMatrix(int** matrix, int rowsNumber, int columnsNumber){
    for (int row = 0; row < rowsNumber; ++row) {
        for (int column = 0; column < columnsNumber; ++column) {
            switch(matrix[row][column]){
                case 0:
                    cout<<" ";
                    break;
                case 1:
                    cout<<"O";
                    break;
                case -1:
                    cout<<"T";
                    break;
            }
        }
        cout<<endl;
    }
}

void drawScene(Scene* scene){
    for(int i=0; i<5; ++i){
        cout<<endl;
    }
    printMatrix(scene->getMatrix(),scene->getRowsNumber(),scene->getColumnsNumber());
    this_thread::sleep_for(chrono::milliseconds(1000));
}