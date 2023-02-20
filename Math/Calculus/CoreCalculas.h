
namespace math
{
    namespace Calculas
    {
        float derivative(float (*f)(float), float x);
        double derivative(double (*f)(double), double x);

        // Integral of a function
        float integral(float (*f)(float), float a, float b);
        double integral(double (*f)(double), double a, double b);
        /*   
           // Vector operations
           vector<float> add_vectors(const vector<float>& v1, const vector<float>& v2);
           vector<double> add_vectors(const vector<double>& v1, const vector<double>& v2);
           float dot_product(const vector<float>& v1, const vector<float>& v2);
           double dot_product(const vector<double>& v1, const vector<double>& v2);
           vector<float> cross_product(const vector<float>& v1, const vector<float>& v2);
           vector<double> cross_product(const vector<double>& v1, const vector<double>& v2);*/

        // Integral
        float definite_integral(float a, float b, float (*f)(float x));
        double definite_integral(double a, double b, double (*f)(double x));
        float indefinite_integral(float (*f)(float x), float C);
        double indefinite_integral(double (*f)(double x), double C);

        // Derivative
        float derivative(float (*f)(float x), float x);
        double derivative(double (*f)(double x), double x);

    }
}