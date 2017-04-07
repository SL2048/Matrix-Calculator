#ifndef MATRIXCALCULATOR_H
#define MATRIXCALCULATOR_H
#include "Matrix.h"
#include <iostream>

using namespace std;


class MatrixCalculator
{
    public:
        MatrixCalculator();
        virtual ~MatrixCalculator();
        void Add();
        void Sub();
        void Mul();
        void Trans();
};

#endif // MATRIXCALCULATOR_H
