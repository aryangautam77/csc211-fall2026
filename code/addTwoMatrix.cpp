#include <iostream>

// Write a void function that adds two (NxN) 
// 2D matrices together where 1 <  N <= 10 to std::cout.

void addMatrix(int m[][10], int m2[][10], int n){

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++){
            std::cout << m[i][j] + m2[i][j] << " ";
        }

        std::cout << std::endl;

    }

}

int main(){

    int m1[10][10] = {{1,2,3},{1,2,3},{1,2,3}};
    int m2[10][10] = {{1,2,3},{4,5,6},{7,8,9}};

    addMatrix(m1, m2, 3);

    return 0;
}
