#include <iostream>


int sumMainDiagonal(int **arr, int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i == j) sum += arr[i][j];
        }
    }

    return sum;

}

void fillMatrix (int **array, int rows, int columns)
{
    //Taking input in the array
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            array[i][j] = rand() % 100;
        }
    }
}


void printMatrix (int **array, int rows, int columns)
{
    //printing out the given array
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout<<array[i][j]<<" ";
        }
        std::cout << std::endl;
    }
}


int main()
{
    int **array;
    int rows = 0;
    int columns = 0;
    int sum = 0;

    std::cin>>rows;
    std::cin>>columns;

    //Dynamically allocating rows space in heap
    array = new int*[rows];
    //Dynamically allocating column space in heap
    for(int i = 0; i < rows; i++){
        array[i] = new int[columns];
    }

    fillMatrix(array, rows, columns);
    std::cout<<"\n";
    printMatrix(array, rows, columns);

    sum = sumMainDiagonal(array, rows, columns);
    std::cout<<"The sum of the elements of the main diagonal us equal to: "<< sum<<std::endl;
    
    
   //Free space after the use of array:
    for (int count = 0; count < rows; ++count)
    {
        delete[] array[count];
    };

    return 0;
}
