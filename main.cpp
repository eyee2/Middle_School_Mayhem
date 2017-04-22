#include <iostream>
#include <fstream>
#include "Event.hpp"

int main() {
    std::ifstream titleStream ("Title.txt");
    std::string line;
    std::vector<std::string> title;
    while(titleStream.peek() != EOF) {
        getline(titleStream, line);
        title.push_back(line);
    }
    for (auto i : title) {
        std::cout << i << std::endl;
    }
        titleStream.close();
    /*while(continueGame)

        std::cout << ""<< std::endl;
        Event::generateEvent();
    }
     */
    return 0;
}