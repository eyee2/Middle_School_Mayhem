#include <iostream>
#include <fstream>
#include "Event.hpp"
bool continueGame;
Event events;
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
    std::cout << "\n\n\n\n\n" << std::endl;
        titleStream.close();
    events.readEvents();
    continueGame = true;
    while(continueGame){

        std::cout << events.popEvent() << std::endl;
        std::cin
    }

    return 0;
}