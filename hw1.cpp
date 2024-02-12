//this program is to replicate the seven stages of the game hangman
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
string name;
cout <<"Hello please enter your full name" << endl;
getline (cin,name); //had help with this line from friend cross hessler
cout <<"hello " << name << endl;
cout <<"stage 0" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|         " << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;


cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

cout <<"stage 1" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|       0 " << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;

cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

cout <<"stage 2" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|       0 " << endl;
cout << setw(32) << "|       | " << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;

cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

cout <<"stage 3" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|       0 " << endl;
cout << setw(32) << "|      /| " << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;

cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

cout <<"stage 4" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|       0 " << endl;
cout << setw(32) << "|      /| " << endl;
cout << setw(30) << "|      /" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;

cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

cout <<"stage 5" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|       0 " << endl;
cout << setw(34) << "|      /|\\. " << endl;
cout << setw(30) << "|      /" << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;

cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

cout <<"stage 6" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|       0 " << endl;
cout << setw(34) << "|      /|\\. " << endl;
cout << setw(33) << "|      / \\." << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;

cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

cout <<"stage 7" << endl;
cout << setw(40) << "|-----------------" << endl;
cout << setw(32) << "|/      | " << endl;
cout << setw(32) << "|       0 " << endl;
cout << setw(34) << "|      /|\\. " << endl;
cout << setw(33) << "|      / \\." << endl;
cout << setw(23) << "|" << endl;
cout << setw(23) << "|" << endl;
cout << setw(28) << "===========" << endl;
cout <<"Game Over" << endl;
cout << "Press Enter to Continue";
cin.ignore(std::numeric_limits<streamsize>::max(),'\n');


return 0;
}