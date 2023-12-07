#include <iostream>
#include <vector>

int main() {
   
    std::vector<std::vector<int>> originalMatrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    std::vector<std::vector<int>> transposedMatrix(originalMatrix[0].size(), std::vector<int>(originalMatrix.size()));
    for (int i = 0; i < originalMatrix.size(); i++) {
        for (int j = 0; j < originalMatrix[i].size(); j++) {
            transposedMatrix[j][i] = originalMatrix[i][j];
        }
    }

    for (int i = 0; i < transposedMatrix.size(); i++) {
        for (int j = 0; j < transposedMatrix[i].size(); j++) {
            std::cout << transposedMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}