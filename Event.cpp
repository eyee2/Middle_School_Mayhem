//
// Created by Ethan on 4/9/2017.
//

#include "Event.hpp"
Event::Event(){
    std::vector<std::string> eventQueue;
    std::vector<std::vector<std::string>>  responses;
}
std::string Event::popEvent(){
    std::vector<std::string> printVector;
    static auto i = eventQueue.begin();
    while (*i != "@@\r") {
        std::cout << *i << std::endl;
        i++;
    }
    if (i != eventQueue.end()) {
        i++;
    }
}


void Event::readEvents(){
    std::ifstream eventStream ("Events.txt");
    std::string line;
    while(eventStream.peek() != EOF) {
        getline(eventStream, line);
        eventQueue.push_back(line);
    }
    eventStream.close();
}

