#include "CoreMatrix.h"
#include <array>

namespace math
{
    namespace algebra
    {
        namespace matrix
        {
            math::algebra::matrix::Mat::Mat(int row, int column) : Row(row) ,Column(column)
            {
                Item = new  int* [row];
                for (int i = 0; i < row  ; i++)
                {
                    Item [i] = new int [column ];
                }
                Size = row*column;
                if(row ==column)
                {
                    bIsSquareMatrix =true;
                }
    
            }

            Mat::~Mat()
            {
                for(int i = 0 ; i < Row ; i++)
                {
                    delete[] Item [i];
                }
                delete Item;
            }

            void Mat::SetRow(int RowIndex , int* RowArray)
            {
                for (int i = 0 ; i < Column ; i++)
                {
                    Item[RowIndex][i] = RowArray[i];
                }
            }

            int Mat::GetSize()
            {
                return Size;
            }

            int** Mat::Get()
            {
                return Item;
            }

            void Mat::Add(Mat& Matrix)
            {
                if (Row == Matrix.Row && Column == Matrix.Column) {
                    for (int i = 0; i < Row; i++) {
                        for (int j = 0; j < Column; j++) {
                            Item[i][j] += Matrix(i, j);
                        }
                    }
                }
            }

            void Mat::SetColumn(int ColumnIndex, int* ColumnArray)
            {
                for(int i = 0 ; i<Row ; i++)
                {
                    Item [i][ColumnIndex-1] = ColumnArray[i];
                }
            }

            Mat* generate_matrix(int row, int column, Mat*& Mat)
            {
                int ** Item = Mat->Get();
                if(Mat->Get() ==nullptr)
                {
                    Item = new  int* [row];
                    for (int i = 0; i < row  ; i++)
                    {
                        Item [i] = new int [column ];
                    }
                    Mat->Set(Item);
                    return  Mat ;
                }

                return Mat ;
                
            }

            math::algebra::matrix::Mat* math::algebra::matrix::Multiply( Mat& Mat1,  Mat& Mat2)
            {
    
                Mat*Multiply ;
                Multiply = new Mat(Mat1.Row, Mat2.Column);
                
                int sum=0;
                if(Mat1.Column == Mat2.Row )
                {
                    for (int i = 0  ; i < Mat1.Row ; i++ )
                    {
                        for (int j = 0  ; j < Mat1.Column ; j++ )
                        {
                            for ( int k = 0 ; k < Mat1.Column; k++)
                            {
                                sum = Mat1(i,k)*Mat2 (k,i);
                            }
                        }

                            
                            
                    }
                }

                return  Multiply;
            }

            Mat* Add(Mat& Mat1, Mat& Mat2)
            {
                Mat* Sum  = new Mat(Mat1.Row, Mat1.Column);
                if(Mat1.Column == Mat2.Column)
                {
                    
                    for (int i = 0 ; i < Mat1.Row ; i++)
                    {
                        for (int j = 0 ; j < Mat1.Column ; j++)
                        {
                            Sum[i][j] = Mat1(i,j) + Mat2 (i,j) ;
                        }
                    }
                }
            }

            int Det(Mat& Matrix)
            {
                int sum=0 ;
                for (int i = 0 ; i< Matrix.Column ; i++)
                {
                    sum +=   Matrix(0,0)((Matrix(1,1)*Matrix(2,2))-(Matrix(3,2)*Matrix(2,3)))
                            -Matrix(0,1)((Matrix(3,3)*Matrix(2,1))- (Matrix(3,1)*Matrix(2,3)))
                            +Matrix(0,2)((Matrix(2,1)*Matrix(3,2))-(Matrix(3,1)*Matrix(2,2)));
                }

                return sum;
            }

            Mat* Transpose(Mat& Matrix)
            {
            }
        }
    }
}

