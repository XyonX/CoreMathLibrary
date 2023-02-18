#include"CoreArithmetic.h"


namespace math
{
    namespace arithmetic
    {
          float add(const float& a, const float& b)
        {
            return a+b;
        }

        double add(const double& a, const double& b)
        {
            return a+b;
        }

        int add(const int& a, const int& b)
        {
            return a+b;
        }

        float subtract(const float& a, const float& b)
        {
            return a+b;
        }

        double subtract(const double& a, const double& b)
        {
            return  a+b;
        }

        int subtract(const int& a, const int& b)
        {
            return a+b;
        }

        float multiply(const float& a, const float& b)
        {
            return a*b;
        }

        double multiply(const double& a, const double& b)
        {
            return a*b;
        }

        int multiply(const int& a, const int& b)
        {
            return a*b;
        }

        float divide(const float& a, const float& b)
        {
            return a/b;
        }

        double divide(const double& a, const double& b)
        {
            return a/b;
        }

        int divide(const int& a, const int& b)
        {
            return a/b;
        }

        float modulo(const float& a, const float& b)
        {
            float smallfloat = a;
            float largefloat=b;
            if (a>b)
            {
                smallfloat=b;
                largefloat=a;
            }

            float rem =largefloat- (largefloat/smallfloat);
            return rem;
        }

        double modulo(const double& a, const double& b)
        {
            return 0;
            
        }

        int modulo(const int& a, const int& b)
        {
            return 0;
        }

        float power(const float& a, const float& b)
        {
            return 0;
        }

        double power(const double& a, const double& b)
        {
            return 0;
        }

        int power(const int& a, const int& b)
        {
            return 0;
        }

        float absolute_value(const float& a)
        {
            return 0;
        }

        double absolute_value(const double& a)
        {
            return 0;
        }

        int absolute_value(const int& a)
        {
            return 0;
        }

        float square_root(const float& a)
        {
            return 0;
        }

        double square_root(const double& a)
        {
            return 0;
        }

        float round(const float& a)
        {
            return 0;
        }

        double round(const double& a)
        {
            return 0;
        }

        int round(const int& a)
        {
            return 0;
        }

        float ceiling(const float& a)
        {
            return 0;
        }

        double ceiling(const double& a)
        {
            return 0;
        }

        int ceiling(const int& a)
        {
            return 0;
        }

        float floor(const float& a)
        {
            return 0;
        }

        double floor(const double& a)
        {
            return 0;
        }

        int floor(const int& a)
        {
            return 0;
        }

        float logarithm(const float& a, const float& b)
        {
            return 0;
        }

        double logarithm(const double& a, const double& b)
        {
            return 0;
        }
    }
}