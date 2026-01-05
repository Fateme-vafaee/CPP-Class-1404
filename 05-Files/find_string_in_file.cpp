#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream mainFile;
    // opening the file
    mainFile.open("./Text-Files/find_string_in_file.txt");

    cout << "Please enter what you are searching for :";
    string target;
    getline(cin, target);

    // serach word by word
    string fileWords;
    while (mainFile >> fileWords)
    {
        if (fileWords.find(target) != string::npos)
        {
            cout << "found";
            break;
        }
    }
    if (fileWords.find(target) == string::npos)
    {
        cout << "not found";
    }
}