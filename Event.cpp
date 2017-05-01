//
// Created by Ethan on 4/9/2017.
//

#include "Event.hpp"
#include <chrono>
#include <thread>
#include <algorithm>
Event::Event(){
    std::vector<std::string> eventQueue;
    std::vector<std::vector<std::string>> responses(2);

}

void Event::popEvent() {
    std::vector<std::string> printVector;
    static auto i = eventQueue.begin();
    while (*i != "@@\r") {
        std::this_thread::sleep_for(std::chrono::nanoseconds(800000000));
        std::cout << *i << std::endl;
        i++;
    }
    if (i != eventQueue.end()) {
        i++;
    }
}


void Event::readEvents(){
    std::ifstream eventStream("../Events.txt");
    std::string line;
    while (eventStream.peek() != EOF) {
        getline(eventStream, line);
        eventQueue.push_back(line);
    }
    eventStream.close();
}

void Event::readResponses(std::ifstream responseStream) {
    responses.clear();
    std::string line;
    std::vector<std::string> temp;
    while (responseStream.peek() != EOF) {
        for (int i = 0; i < 2; i++) {
            getline(responseStream, line);
            while (line != "@@\r" && responseStream.peek() != EOF) {
                temp.push_back(line);
                getline(responseStream, line);
            }
            responses.push_back(temp);
            temp.clear();
        }
    }
    responseStream.close();
}

void Event::printResponses(int index) {
    for (auto i : responses.at(index)) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(800000000));
        std::cout << i << std::endl;
    }
}


