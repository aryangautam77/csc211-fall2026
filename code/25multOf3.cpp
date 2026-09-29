// Write a single for loop to print the
//  average of the first 25 multiples of 3

#include <iostream>

int main(){

    int average = 0;

    for(int i = 1; i <= 25; i++){
        average += 3 * i;
    }
    average /= 25;
    std::cout << average;

}