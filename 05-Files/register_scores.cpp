#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream newFile;

    // make a new file in case of not existence
    newFile.open("./Text-Files/register_scores.txt");
    string subject;
    int score = 0;

    // register the scores
    while (score != -1)
    {
        cout << "Please enter the subject ";
        getline(cin, subject);
        cout << "Please enter the score ";
        cin >> score;

        // clear the input buffer (remove leftover newline)
        cin.ignore();

        if (score != -1)
        {
            newFile << subject << " " << score << endl;
        }
        else
        {
            break;
        }
    }
    newFile.close();

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}