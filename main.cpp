#include <iostream>

using namespace std;

class Player {
    public:
    
    int health = 100; //Member Variable

    private:

    void Attack() //Member Function
    {

    }

};

int main()
{
    std::cout << "Welcome to the Dragon Realm!\n";

    std::string playerName;

    std::cout << "Please enter player name: ";
    std::cin >> playerName;
    std::cout << "\n";

    std::cout << "Welcome, " << playerName << ", to the Dragon Realm!\n";
    std::cout << "-----------------------------------------\n";
   
    int choice;

    std::cout << "Where will you go, " << playerName << "?\n";
    std::cout << "1. Dragon Town\n";
    std::cout << "2. Shimmering Lake\n";
    std::cout << "3. Green Forest\n";
    std::cout << "Please enter your choice(1-3): \n";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You chose Dragon Town.\n";
    }
    else if (choice == 2) {
        std::cout << "You chose Shimmering Lake.\n";
    }
    else if (choice == 3) {
        std::cout << "You chose Green Forest.\n";
    }
    else {
        std::cout << "***INVALID INPUT***\n";
    }

    switch(choice) {
        
    }

}