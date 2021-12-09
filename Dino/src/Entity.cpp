//
// Created by Maciej Płachta on 09.12.2021.
//

#include "../include/Entity.h"

Entity::Entity() {
    matrix = new int *[rowsNumber];
    for (int row = 0; row < rowsNumber; ++row) {
        matrix[row] = new int[columnsNumber];
        for (int column = 0; column < columnsNumber; ++column) {
            matrix[row][column]=10;
        }
    }
}
