// ScoreKeeperCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstring>
#include <iostream>
#include <memory.h>
#include <stdio.h>
#include <string>
using namespace std;

const int numTeams = 5;
const char* team[numTeams] = { "TeamA", "TeamB", "TeamC", "TeamD", "TeamE"};
std::string match[numTeams + 2]; // number of teams + 2 so that it accounts for the extra matches
int matchIndex = 0;

int main()
{
    printf("");
    for (int j = 0; j < numTeams + 2; j++) { // loops for number of matches, which is the number of teams + 2
        for (int i = 1; i < numTeams; i++) { // loops through the teams until i >= to the number of teams
            if (i > j) { // checks that var i != var j so that there are no TeamX vs TeamX parings or parings that have already been done.
                std::string x = team[j]; // creates var x as a team 
                //std::cout << x;
                x += " VS "; // appends "VS"
                x += team[i]; // appends second team to x
                std::cout << x; // prints x
                match[matchIndex] = x; // enters x into match array
                std::cout << "\n test " << match[matchIndex] << "\n";
                matchIndex = matchIndex + 1; // increments match index so as to not overwrite previously entered data
            }
        }
        printf("\n"); // makes the printed data easier to read
    }
    for (int i = 0; i < matchIndex; i++) { // loops through var i with reference to matchIndex
        std::cout << "\n matches " << match[i]; // prints match parings, this is what will be entered into the randome generator.
    }
}

/*/int order(int num)
{
    int q = num;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*
ABCD  12 13 14 15 23 24 25 34 35 45
BCDE  
CDE   
DE
E
*/