#include <iostream>

void fillArray(int *array, int sizeOfArray)
{
    std::cout<<"Enter all the elements of your array: "<<std::endl;

    int element = 0;
    //Taking input in the array (customized)
    for(int i = 0; i < sizeOfArray; i++)
    {
        std::cin>>element;
        array[i] = element;
    }
}


double minAverage (int *array, int sizeOfArray, double k)
{
    double currentSum = 0;
    double min = 1000000;
    double currentAverage = 0;

    for (int i = 0; i < sizeOfArray - k + 1; ++i) {
        for (int j = i; j < i + k; ++j) {
            currentSum += array[j];
        }

        currentAverage = currentSum / k;
        if (currentAverage < min) min = currentAverage;
    }

    return min;
}


int main()
{
    double k = 0;
    int sizeOfArray = 0;

    std::cout<<"Enter the size of your array: "<<std::endl;
    std::cin>>sizeOfArray;

    std::cout<<"Enter the value of k: "<<std::endl;
    std::cin>>k;

    int *array = new int[sizeOfArray];

    fillArray(array, sizeOfArray); // filling the array with customary elements
    std::cout<<"The minimum average value is equal to: "<<minAverage(array, sizeOfArray, k)<<std::endl;

    delete[]array; //freeing up the taken space

    return 0;
}
