#include <iostream>
#include <fstream>
#include "Event.hpp"
#include "Player.hpp"
#include <chrono>
#include <thread>
#include <windows.h>

bool continueGame;
Event events;

int main() {
    Player player;
    std::ifstream titleStream("../Title.txt");
    std::string line;
    std::vector<std::string> title;

    std::cout << "Optimizing quantum cores..." << std::endl;
    for (int i = 0; i < 2; i++) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(100000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "\r";
    }
    std::cout << "\nSuccess." << std::endl;
    std::cout
            << "Activating processor overclocking and disabling non-critical processes..."
            << std::endl;
    for (int i = 0; i < 2; i++) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "\r";
    }
    std::cout
            << "\nSuccess. Deleted system32 to maximize date storage capabilities."
            << std::endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(3000000000));

    std::cout << "Downloading more ram..." << std::endl;
    for (int i = 0; i < 2; i++) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(100000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
        std::cout << "\r";
    }
    std::cout << "\nSuccess." << std::endl;

    while (titleStream.peek() != EOF) {
        getline(titleStream, line);
        title.push_back(line);
    }
    for (auto i : title) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(500000000));
        std::cout << i << std::endl;
    }
    std::cout << "\n\n\n" << std::endl;
    titleStream.close();
    events.readEvents();
    std::cout << "Enter your name: " << std::endl;
    char name[20];
    std::cin.getline(name, sizeof(name));
    std::cout << std::endl;
    player.Name = name;
    std::cout << "Enter your preferred gender: " << std::endl;
    std::string gender;
    std::cin >> gender;
    std::cout
            << "Gender is a social construct. Our game doesn't discriminate based upon fictitious societal norms."
            << std::endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(5000000000));
    std::cin.clear();
    events.popEvent();
    char breakfastFood = 'q';
    std::cin >> breakfastFood;
    std::cin.clear();
    while (breakfastFood != 'e' && breakfastFood != 'p') {
        std::cin.clear();
        std::cout
                << "Please don't try to break our game. It's one character you're fully capable of typing a valid one."
                << std::endl;
        std::cin >> breakfastFood;
    }
    player.breakfastFood = breakfastFood;
    events.popEvent();
    char transport;
    std::cin >> transport;
    player.transport = transport;

    events.readResponses(std::ifstream("../Responses1.txt"));
    if (player.transport == 'b') {
        events.printResponses(0);
    } else {
        events.printResponses(1);
    }

    events.readResponses(std::ifstream("../Responses2.txt"));
    if (player.transport == 'r') {
        events.printResponses(0);
    } else {
        events.printResponses(1);
    }

    events.popEvent();
    events.readResponses(std::ifstream("../Responses3.txt"));
    if (player.breakfastFood == 'p') {
        events.printResponses(0);
    } else {
        events.printResponses(1);
        exit(0);
    }
    events.popEvent();

    char answer = 'a';
    std::cout << "Select the correct answer: "
              << "\n (a) (n^2+3n+1)^2 \n (b) (n^2+2n+1)^2 \n (c) (2n^2+3n+2)^2"
              << "\nChoose wisely -- SMOL is watching" << std::endl;
    std::cin.clear();
    std::cin >> answer;
    if (answer == 'a') {
        std::cout
                << "Correct! SMOL looks rather pleased with your answer. He/she begins to blush, and his/her face begins to turn bright red. You're quite overjoyed with making him/her happy"
                << std::endl;
    } else {
        std::cout
                << "You suck. Wrong. Wrong. Wrong. SMOL would never deign to such a lowly, non-STEM major such as yourself. Go back to the shadows of liberal arts."
                << std::endl;
        exit(0);
    }

    events.popEvent();

    std::cout << 3 << std::endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
    std::cout << 2 << std::endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
    std::cout << 1 << std::endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
    int guess;
    std::cout << "Enter your guess: " << std::endl;
    std::cin >> guess;
    while (guess > 2 || guess < 1) {
        std::cout << "The odds are between 1 and 2. Try again" << std::endl;
        std::cin >> guess;
    }
    int randNum = rand() % (2 - 1 + 1) + 1;
    if (randNum == guess) {
        std::cout
                << "--You guessed correctly. You smile smugly at Gary, knowing he now has to pull the fire alarm."
                << std::endl;
        std::cout
                << "--Not wanting to watch the chaos ensue you casually stroll out of school with SMOL at your side. He/She was scared so you consoled him/her."
                << std::endl;
        std::cout
                << "Congratulations this is the only way to win the game: Perfect Score 5/7";
    } else {
        std::cout
                << "--You guessed incorrectly! You pull the fire alarm and get expelled from school."
                << std::endl;
        std::cout
                << "--SMOL doesn't love you. Maybe you'll do better at your next school."
                << std::endl;
    }
    return 0;
}