#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream mainFile;

    // opening the file
    mainFile.open("./Text-Files/register_scores.txt");

    string Subject;
    int score;
    float sum = 0.0;
    int counter;
    
    // reading through file
    while (mainFile >> Subject)
    {
        mainFile >> score;
        sum += score;
        counter++;
    }
    cout << "the average is : " << sum / counter<<endl;

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}