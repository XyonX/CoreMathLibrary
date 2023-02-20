#include "../CoreAlgebra.h"
#include <array>


namespace math
{
    namespace algebra
    {
        namespace matrix
        {
            class Mat
            {

            private:
                int  ** Item;
                int Size =0 ;

            public:
                //Constructor and Destructor
                Mat(int row ,int column );
                ~Mat();

                //overloading operators
                //int*& operator[](int row) 
                //{
                //    return Item[row];
                //}

                int & operator[](int row) 
                {
                    return *Item[row];
                }

                int& operator()(int row, int col) 
                {
                    return Item[row][col];
                }


                
                // Public Variables 
                bool bIsSquareMatrix ;
                int Row ;
                int Column ;

                //Getters
                int  GetSize ();
                int** Get();
                void Add (Mat & Matrix );

                
                // setters
                void Set (int** Array)
                {
                    Item =Array;
                }
                void SetRow(int RowIndex , int* RowArray);
                void SetColumn (int ColumnIndex , int* ColumnArray );
    
            };

            
            //this fucntion generates a matrix in the 
            Mat* generate_matrix  (int row , int column , Mat*& Mat );
            Mat* Multiply( Mat & Mat1 , Mat & Mat2 );
            Mat* Add (Mat & Mat1 , Mat & Mat2);
            int Det (Mat& Matrix);
            Mat* Transpose ( Mat & Matrix);
        }
    }
}

namespace mat = math::algebra::matrix ;


