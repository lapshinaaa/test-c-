#include <iostream>

int equalDominoes(int **arr, int numberOfDominoes) {
    int countEqual = 0;
    for (int i = 0; i < numberOfDominoes; ++i) {
        for (int j = i + 1; j < numberOfDominoes; ++j) {
            if (arr[i][0] + arr[i][1] == arr[j][0] + arr[j][1]) countEqual++;
        }
    }
    return countEqual;
}


int main() {
    int numberOfDominoes = 0;

    std::cout << "Enter the number of dominoes:" << std::endl;
    std::cin >> numberOfDominoes;

    int **arr = new int*[numberOfDominoes];

    for (int i = 0; i < numberOfDominoes; ++i) {
        arr[i] = new int[2];
        std::cout << "Input the value of a domino " << i + 1 << std::endl;
        std::cin >> arr[i][0] >> arr[i][1];
    }

    int answer = equalDominoes(arr, numberOfDominoes);
    std::cout << answer << std::endl;

    for (int i = 0; i < numberOfDominoes; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}