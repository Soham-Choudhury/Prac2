#include "Referee.h"

 char refGame(Human human, Computer computer){
    
    char humanmove=human.makeMove();
    char computermove=computer.makeMove();
    char output;

    if (humanmove == 'R'&& computermove =='R'){
        output='T';
    }
    else if (humanmove == 'S'&& computermove == 'R'){
        output='L';
    }
    else if (humanmove == 'P'&& computermove == 'R'){
        output='W';
    }

    return output;
 }