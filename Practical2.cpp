#include <iostream>
using namespace std;

int main() {
    // Taking input
    int u, s, m, sm;
    cout << "Enter the total number of students: ";
    cin >> u;
    cout << "Enter the total number of students in Sports club: ";
    cin >> s;
    cout << "Enter the total number of students in Music club: ";
    cin >> m;
    cout << "Enter the number of students in both Sports and Music clubs: ";
    cin >> sm;

    // Displaying the values
    cout << "\n--- Input Summary ---\n";
    cout << "Total students: " << u << endl;
    cout << "Sports club: " << s << endl;
    cout << "Music club: " << m << endl;
    cout << "Both Sports and Music club: " << sm << endl;

    cout << "\n--- Calculations ---\n";

    // Students in at least one club
    int atleastOne = s + m - sm;
    cout << "Students in at least one club: " << atleastOne << endl;

    // Only in Sports club
    int sportsOnly = s - sm;
    cout << "Students only in Sports club: " << sportsOnly << endl;

    // Only in Music club
    int musicOnly = m - sm;
    cout << "Students only in Music club: " << musicOnly << endl;

    // Neither club
    int neither = u - atleastOne;
    cout << "Students in neither club: " << neither << endl;

    return 0;
}

