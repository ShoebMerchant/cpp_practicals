/**
 * Write a C++ program to create a class which contains two dimensional integer array of size mXn.
 * Write a member function to display transpose of entered matrix.
 * (Use Dynamic Constructor for allocating memory and Destructor to free memory of an object)
 */

#include <iostream>
using namespace std;

class multidimensional_arr
{
    int **m_array;
    int rows;
    int cols;

public:
    multidimensional_arr();
    void display();
    void transpose();
};
multidimensional_arr::multidimensional_arr()
{
    cout << "Enter numbers of rows: ";
    cin >> rows;
    cout << "Enter numbers of columns: ";
    cin >> cols;

    // Memory allocation for Multidimensional integer array
    m_array = new int *[rows];
    for (int i = 0; i < rows; i++)
        m_array[i] = new int[cols];

    cout << "Please enter you matrix" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            cin >> m_array[i][j];
        }
}
void multidimensional_arr::display()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << m_array[i][j] << " ";
        }
        cout << endl;
    }
}
void multidimensional_arr::transpose()
{
    int column_index = 0;
    for (int row_index = 0, k = 0; k < cols; column_index++)
    {
        for (; column_index < rows; row_index++)
        {
            cout << m_array[row_index][column_index] << " ";
            if (row_index == rows - 1)
            {
                row_index = 0;
                column_index = 0;
                k++;
            }
        }
        cout << endl;
    }
}

/*
5 2
8 7
4 6
*/
int main()
{
    multidimensional_arr matrix;
    matrix.display();
    matrix.transpose();
    return 0;
}