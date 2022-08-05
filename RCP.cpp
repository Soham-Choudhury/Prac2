#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main (){
    Human human;
    Computer computer;
    Referee referee;
      
    std::cout<<referee.refGame(human, computer)<<std::endl;

    return 0;
}