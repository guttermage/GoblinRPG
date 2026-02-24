
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

int main()
{
    Player user;

    std::cout << "WELCOME TO....\n" << " \n";

    std::cout << R"(
  ooooooo8    ooooooo  oooooooooo ooooo       ooooo oooo   oooo      oooooooooo  oooooooooo    ooooooo8  
o888    88  o888   888o 888    888 888         888   8888o  88        888    888  888    888 o888    88  
888    oooo 888     888 888oooo88  888         888   88 888o88        888oooo88   888oooo88  888    oooo 
888o    88  888o   o888 888    888 888      o  888   88   8888        888  88o    888        888o    88  
 888ooo888    88ooo88  o888ooo888 o888ooooo88 o888o o88o    88       o888o  88o8 o888o        888ooo888  
                                                                                                         
)"  << " \n" << " \n" << "Press ENTER to continue...";

    std::cin.get();
    system("cls");

    std::cout << "Welcome, initiate. State thy name: \n \n";
    std::getline(std::cin >> std:: ws, user.name);
    std::cout << "\n" << user.name << ", for what reason do you require our counsel?";



};