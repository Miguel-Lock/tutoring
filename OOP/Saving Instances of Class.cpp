#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Character {
    public:
        string name;
        int HP;
        int XP;
    Character(string n, int hp, int xp) {
        name = n;
        HP = hp;
        XP = xp;
    }
};


//Create global variable characterVector
//holds type of class Character
vector<Character> characterVector;


void add_character() {
    string name, race;
    int HP, XP;

    cout << "Enter a character name: ";
    getline(cin, name);

    cout << "Enter HP: ";
    cin >> HP;

    cout << "Enter XP: ";
    cin >> XP;

    Character temp(name, HP, XP);
    characterVector.push_back(temp);
}

void display_characters() {
    cout << endl << endl;
    for(int i=0; i<characterVector.size(); i++) {
        cout << characterVector[i].name << "\nXP: " << characterVector[i].XP << " HP: " << characterVector[i].HP << endl << endl;
    }
}

int main() {
    string proceed = "Yes";

    while (proceed != "n" && proceed != "N" && proceed != "No" && proceed != "no") {
        add_character();

        cout << "Would you like to add another character? (Y/N)\n>";
        cin >> proceed;

        cin.ignore();
    }

    display_characters();

    return 0;
}