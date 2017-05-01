//
// Created by Ethan on 4/9/2017.
//
#include <iostream>
#include <queue>
#include <fstream>
#ifndef MIDDLE_SCHOOL_MAYHEM_EVENT_HPP
#define MIDDLE_SCHOOL_MAYHEM_EVENT_HPP


#include <vector>

class Event {
public:
    Event();
    std::vector<std::string> eventQueue;
    std::vector<std::vector<std::string>> responses;

    void popEvent();

    void readEvents();

    void readResponses(std::ifstream responseStream);

    void printResponses(int index);


private:
};


#endif //MIDDLE_SCHOOL_MAYHEM_EVENT_HPP
