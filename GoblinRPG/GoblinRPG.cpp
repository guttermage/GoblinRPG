
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
    int currentRoom = 0;

    //Describes variables that were defined in the Rooms struct.
    std::vector<Rooms> dungeon = {
        {"Birthing Pools", "Muddy, stinky, and loud. Welcome to life.",{1,2}}
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
            std::cout << "Path " << pathID << " \n";
        }
    std::cout << "\n";

    int choice;
    std::cin >> choice;

    currentRoom = choice;
    std::cout << "You have entered path  " << currentRoom;

};