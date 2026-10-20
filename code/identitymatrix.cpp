#include <iostream>

// build a NxN identity matrix
// n = 3
// 1 0 0
// 0 1 0
// 0 0 1

void printMatrix(int m[][3], int row, int col){

    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < col; j++){
            std::cout << m[i][j] << " ";
        }

        std::cout << std::endl;

    }

}



int main(){


    int matrix[3][3];

    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            
            if(i == j){
                matrix[i][j] = 1;

            }
            else{
                matrix[i][j] = 0;

            }
            
        }

        std::cout << std::endl;
    }

    printMatrix(matrix, 3 ,3);



    return 0;
}