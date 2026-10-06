// Write a function  highest_prime that takes an integer n > 1 from 
// stdin and outputs the largest prime number less than or equal than n to 
// the stdout use an is_prime function to help find highest_prime 

// No external libraries or LLMs

#include <iostream>

bool isPrime(int someNumber){

    bool isPrime = true;

    for(int i = 2; i < someNumber; i++){
        if(someNumber % i == 0){
            isPrime = false;
            return isPrime;

        }
    }
    return isPrime;

}

void highestPrime(int n ){
    for(int i = n; i >= 2 ; i--){
        if(isPrime(i)){
            std::cout << i;
            break;
        }
    }
}

int main(){

    highestPrime(20);

}