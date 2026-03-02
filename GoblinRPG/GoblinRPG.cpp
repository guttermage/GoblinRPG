
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>

// Structs
struct Items {
    std::string name;
    std::string description;
};

struct Player {
    std::string name;
};

struct NPC {
    std::string name;
    bool isAlive = true;
};

//Holds info variables for the dungeon vector
struct Rooms {
    std::string name;
    std::string description;
    std::vector<int> exits;
};
int main()
{
    //Sets the opening scene
    int choice;
    int currentRoom = 0;

    //Describes variables that were defined in the Rooms struct.
    std::vector<Rooms> dungeon = {
        {"Birthing Pools", "Muddy, stinky, and loud. Welcome to life.",{1,2}},
        {"Room 1", "Room 1 Description", {3,4}},
        {"Room 2", "Room 2 Description", {5,6}},
        {"Room 3", "Room 3 Description", {7}},
        {"Room 4", "Room 4 Description",{7}},
        {"Room 5", "Room 5 Description", {8}},
        {"Room 6", "Room 6 Description", {8}},
        {"Room 7", "Room 7 Description", {9}},
        {"Room 8", "Room 8 Description", {9}}
    };

    //Defines a "Player" variable named user so that we can call the name later.
    Player user;

    std::cout << "WELCOME TO....\n" << " \n";

    std::cout << R"(
  ooooooo8    ooooooo  oooooooooo ooooo       ooooo oooo   oooo      oooooooooo  oooooooooo    ooooooo8  
o888    88  o888   888o 888    888 888         888   8888o  88        888    888  888    888 o888    88  
888    oooo 888     888 888oooo88  888         888   88 888o88        888oooo88   888oooo88  888    oooo 
888o    88  888o   o888 888    888 888      o  888   88   8888        888  88o    888        888o    88  
 888ooo888    88ooo88  o888ooo888 o888ooooo88 o888o o88o    88       o888o  88o8 o888o        888ooo888  
                                                                                                         
)"  << " \n" << " \n" << "Press ENTER to continue...";

    //Need to change this so it doesn't exclusively work on Windows.
    std::cin.get();
    system("cls");

    //Location explanation
    std::cout << "LOCATION: " << dungeon[currentRoom].name << "\n";
    std::cout << dungeon[currentRoom].description << "\n\n";

    std::cout << R"(
  Far beneath the soils of man, new life is made in the subterranean mud pits of Gobliwagwan.
  You breathe your first breaths and eat your first mudpie as you aspirate on the coating of
  goblin slurry covering your face. Wiping your eyes clean, you notice other creatures around you
  reacting similarly. The air reeks of sulfur and is filled with the confused wails of what seem to be your peers.
)" << "\n\n";

    std::cout << "What are you going to do?\n\n";

    std::cout << "Welcome, stinky. State thy name: \n\n";
    //Lets you enter your name and ignores the whitespaces so there's no leak.
    std::getline(std::cin >> std:: ws, user.name);
    std::cout << "\n" << user.name << ", for what reason do you require our counsel?\n\n";

    std::cout << "Where will you go?\n\nChoose your path: \n";
        for (int pathID : dungeon[currentRoom].exits) {
            std::cout << "Path " << pathID << "\n";
        }
    std::cout << "\n";

    std::cin >> choice;

    currentRoom = choice;
    std::cout << "\nYou have entered path " << currentRoom << "\n\n";

    std::cout << "Where will you go?\n\nChoose your path: \n";
    for (int pathID : dungeon[currentRoom].exits) {
        std::cout << "Path " << pathID << " \n";
    }
    std::cout << "\n";

    std::cin >> choice;

    currentRoom = choice;
    std::cout << "\nYou have entered path " << currentRoom << "\n\n";

    std::cout << "Where will you go?\n\nChoose your path: \n";
    for (int pathID : dungeon[currentRoom].exits) {
        std::cout << "Path " << pathID << " \n";
    }
    std::cout << "\n";

    std::cin >> choice;

    currentRoom = choice;
    std::cout << "\nYou have entered path " << currentRoom << "\n\n";

    std::cout << "Where will you go?\n\nChoose your path: \n";
    for (int pathID : dungeon[currentRoom].exits) {
        std::cout << "Path " << pathID << " \n";
    }
    std::cout << "\n";

    std::cin >> choice;

    currentRoom = choice;
    std::cout << "\nYou have entered path " << currentRoom << "\n\n";


};