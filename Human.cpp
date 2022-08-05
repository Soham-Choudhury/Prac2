#include <iostream>
#include "Human.h"

char Human::makeMove() {
    
    std::cout<<"Enter move: ";
    std::cin>>move; // taking Human player input

    return move; //returning human reponse to main function
}