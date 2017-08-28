// This is a very simple program to demonstrate simple
// user input and output and the use of output to a text file.
//The Program is structured around a UserDatabase of no more than 35 users (totusernumber)
//Each user has a number between zero and 35
// The user enters their usernumber, password and some UserData, the latter is output to a text file
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>
using namespace std;

int main()
{
    int usernumber;
    int totusernumber;
    totusernumber = 35;

    cout << "Please enter your usernumber:";
    cin >> usernumber;

    while ( usernumber > totusernumber )
    {
       cout << "This is not a valid usernumber. Please retry with a number below 35:"
       << endl;

        cin >> usernumber;
    }

        string password;

        cout <<"Please enter your password:";
        cin >> password;

        string UserData;


        cout <<"Please enter some UserData:";
        cin >> UserData;
        cout << "You entered this as your UserData:"; '/n'; cout << UserData;


        ofstream myfile ("example.txt");
        if (myfile.is_open())
        {
        myfile << "UserData is inputted into this file.\n";
        myfile << UserData;
        myfile.close();
            }
        else cout << "Unable to open file";



        system("pause");

    //cout << "Press enter to continue..." << endl;
    //cin.ignore(10, '\n');
    //cin.get();
    return 0;
}
