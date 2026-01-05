#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

    ifstream printedFile;

    // opening the file
    printedFile.open("./Text-Files/print_file.txt");
    string word;

    // printing the content
    while (printedFile >> word)
    {
        cout << word;
    }

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}