#include "dragon.h"

// ***
// If you don't want to lose a LOT of points, please don't add any libraries here. T_T
// ***

////////////////////////////////////////////////////////////////////////
/// STUDENT'S ANSWER BEGINS HERE
/// Complete the following functions
/// DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////

Dragon dragons[MAX_DRAGONS];
int dragonDamages[5] = { 0, 0, 0, 0, 0 };
int N = 0;

// Task 1
int readFile(const string filename, Dragon dragons[], int dragonDamages[5], int& N)
{
    // TODO: Implement this function
    ifstream ifs(filename);
    if (!ifs.is_open())
    {
        return 3; // File not found
    }

    if (filename.substr(filename.size() - 4) != ".txt") {
        return 2;
    }

    // Dummy return until implemented


    string lines[7];
    for (int i = 0; i < 7; i++) {
        getline(ifs, lines[i]);
        if (lines[i].size() == 0)
            return 4;

    }
    string name;
    getline(ifs, name);
    int totalnames = 0;
    cout << name.size();
    /*for (int i = 0; i < name.size(); i++) {
        if (name[i] == ',') {
            totalnames++;
        }
            cout << totalnames;
    }
    cout << totalnames;
        if(totalnames != 5){

            return 5;
    }*/
    return 1;



}

// Task 2
string findKthStrongestDragon(Dragon dragons[], int dragonDamages[5], int N, int T)
{
    // TODO: Implement this function
    return "None";
}

// Task 3.1
void compatibilityCheck(Dragon dragons[], string warriorName, int warriorSkill)
{
    // TODO: Implement this function
}

void printCompatibilityTable(string fighterName, string dragonName, float compatibility)
{
    cout << "Warrior      Dragon        Compatibility    Review" << endl;

    string result = (compatibility > 4) ? "Compatible" : "Not Compatible";

    cout << left << setw(13) << fighterName
        << setw(14) << dragonName
        << setw(17) << fixed << setprecision(2) << compatibility
        << result << endl;
}

// Task 3.2
void buddyMatching(Dragon dragons[], string warriors[][3])
{
    // TODO: Implement this function
}

// Task 4
void computeChallengeTime(string warriors[][3], string map[10][10])
{
    // TODO: Implement this function
}

// Task 5.1
void fighterDamage(Dragon dragons[], string warriors[][3], int teamsDamage[])
{
    // TODO: Implement this function
}

// Task 5.2
void findHeritageLocation(int  map[10][10], int& heritageX, int& heritageY) {
    // TODO: Implement this function
}
void findKeyLocation(int map[10][10], int& keyX, int& keyY) {
    // TODO: Implement this function
}
void totalTime(int map[10][10], int warriorDamage, int HP) {
    // TODO: Implement this function
}

////////////////////////////////////////////////
/// END OF STUDENT'S ANSWER
////////////////////////////////////////////////
