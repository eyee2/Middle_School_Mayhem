//
// Created by Ethan on 4/9/2017.
//
#include <iostream>
#ifndef MIDDLE_SCHOOL_MAYHEM_PLAYER_HPP
#define MIDDLE_SCHOOL_MAYHEM_PLAYER_HPP


class Player {
public:

private:
    std::string Name;
    char gender;
    bool breakFastFood;
    //Booleans to branch depending on player decisions
    bool choice1;
    bool choice2;
    bool choice3;
    //Variable to track exit decisions
    bool continueGame;
};


#endif //MIDDLE_SCHOOL_MAYHEM_PLAYER_HPP
