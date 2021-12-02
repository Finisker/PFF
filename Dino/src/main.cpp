//
// Created by Maciej Płachta on 02.12.2021.
//

#include "Floor.h"
#include "cstdio"

void drawScene(Floor);

int main() {
    Floor test;
    test.setMatrix();
    //test.printMatrix();
    drawScene(test);
    test.clearMatrix();
    return 0;
}

void drawScene(Floor floor) {
    for (int row = 0; row < floor.getRows(); ++row) {
        for (int column = 0; column < floor.getColumns(); ++column) {
            if (floor.getMatrix()[row][column] == 1) {
                cout << "o";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}