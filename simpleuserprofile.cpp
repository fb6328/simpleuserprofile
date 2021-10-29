// simpleuserprofile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string fname, lname, favmeal, favmovie;
    cout << "A simple user profile in C++\n";
    cout << "Showing how to capture string data in C++\n\n";
    cout << "Enter your first name:";
    cin >> fname; cout << endl;
    cout << "Enter your last name:";
    cin >> lname; cout << endl;
    //cin>>favmeal; cout << endl;
    cin.ignore();
    cout << "Enter your favorite movie:";
    getline(cin,favmovie); cout << endl;
    cout << "Enter your favorite meal: ";
    getline(cin,favmeal);
    cout << endl;

    cout << ".......My Simple Profile is as follows.....\n\n";
    cout << "......................................................................\n";
    cout << "......................................................................\n";
    cout << ". ";cout << "The Profile of " << fname << " " << lname << endl;
    cout << ". ";cout << "First Name :" << fname<< endl;
    cout << ". ";cout << "Last Name :" << lname<< endl;
    cout << ". ";cout << "Full Name :" << fname << " " << lname<< endl;
    cout << ". ";cout << "Favorite Meal :" << favmeal<< endl;
    cout << ". ";cout << "Favorite Movie :" << favmovie<< endl;
    cout << ". ";cout << "\n";
    cout << ". ";cout << "End of " << fname << " " << lname << "'s user profile\n";
    cout << ". ";
    cout << ". ";
    cout << ".................................................................\n";
    cout << ".....................................................................\n\n\n\n";
    return 0;
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
