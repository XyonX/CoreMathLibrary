#pragma once

#include <iostream>
#include <cmath>


class Matrix
{
private:
    int rows;
    int columns;
    float** elements;

public:
    Matrix(int rows, int columns);
    ~Matrix();
    void setElement(int i, int j, float value);
    float getElement(int i, int j) const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
};



namespace math 
{

    namespace arithmetic 
    {
        // namesace arithmetic
    }

    namespace algebra 
    {
        // namesace algebra
    }
    namespace Geometry
    {
        //namespace Geometry
    }
    namespace Calculas
    {

    }

    namespace trig 
    {

    }

}

namespace Arthm = math::arithmetic;