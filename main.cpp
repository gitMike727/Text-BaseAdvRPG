#include <iostream>

using namespace std;

void gameStory() {
    system("CLS");
    cout << "\n__________________________\n";
    cout << "| Arthur : A Warrior |";
    cout << "\n__________________________\n";
    cout << "\n Once upon a time, there was a Warrior who had everything. Money, Power, Fame. The King, Gerald, ";
    cout << "had a beautiful princess named Diana.\n";
    cout << "\n__________________________\n";
    cout << "\n On a dark & cloudy day, the princess was kidnapped by a group of bandits!\n";
    cout << "\n Arthur was about to marry the princess to one day become king.\n";
    cout << "\n King Gerald ordered Arthur The Warrior to locate and save his daughter!\n";

}

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
gameStory();
}