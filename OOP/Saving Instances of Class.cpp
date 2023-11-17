#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Character {
    public:
        string name;
        int HP;
        int XP;
    Character(string n, string r, int hp, int xp) {
        name = n;
        HP = hp;
        XP = xp;
        characterVector.push_back(*this);
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
    cout << "\nEnter a race: ";
    cin >> HP;
    cout << "\nEnter XP: ";
    cin >> XP;

    Character temp(name, HP, XP);

    characterVector.push_back(temp);

    cout << "Character successfully added!" << endl;
}

void display_characters() {
    for(int i=0; i<characterVector.size(); i++) {
        cout << characterVector[i].name << endl;
    }
}

int main() {
    int num_characters;

    cout << "How many characters do you want to add: ";
    cin >> num_characters;

    for (int i=0; i<num_characters; i++) {
        add_character();
    }

    display_characters();

    return 0;
}