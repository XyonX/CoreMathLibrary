#include "CoreAlgebra.h"


namespace math
{
    namespace algebra 
    {
        // Linear equation
        void linear_equation(const float& a, const float& b,const float& x);
        void linear_equation(double a, double b, double& x);

        // Quadratic equation
        void quadratic_equation(float a, float b, float c, float& x1, float& x2);
        void quadratic_equation(double a, double b, double c, double& x1, double& x2);

        // Determinant of a matrix
        float determinant(float a[][3]);
        double determinant(double a[][3]);

        // Linear equation
        void linear_equation(float a, float b, float& x);
        void linear_equation(double a, double b, double& x);

        // Quadratic equation
        void quadratic_equation(float a, float b, float c, float& x1, float& x2);
        void quadratic_equation(double a, double b, double& x1, double& x2);

        // Determinant of a matrix
        float determinant(float a[][3]);
        double determinant(double a[][3]);
    }
}

