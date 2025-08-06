// File: matrix.h //
// definition of the matrix class
#include <iostream>

class Matrix {
    public:
       // constructor, for: Matrix m(2, 3);
       // copy constructor, for: Matrix m2 = m1;
       // destructor

       // assignment operator, for: m1 = m2;

        // access the individual elements
        // using overloaded operator()
        // for: m(1, 2) = 3.0 
        // for: double x = m(1, 2)
        
        // print the matrix
        // for cout << m1;
        
       // return the transpose of the matrix, 
       // for: m1.transpose()

        // the following operators return a new matrix by value
       // scalar * matrix, for: 2.0 * m  
       // matrix addition, for: m1 + m2
       // matrix multiplication, for: m1 * m2
                
       // comparison operators return true or false
       // for: m1 == m2
       // for: m1 != m2
        
       // return the number of rows
       // return the number of columns

    private:
        int rows;   // number of rows
        int cols;   // number of columns
        double **data;  // pointer to the data
};
    
