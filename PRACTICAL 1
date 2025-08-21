#include <iostream>
using namespace std;
int main() {
    int i, j;
    //  UNIVERSAL SET 
    int total;
    cout<<"How many students are there in the Universal Set? ";
    cin>>total;
    int U[total];
    cout << "Enter roll numbers of all students:\n";
    for(i = 0; i < total; i++) {
        cin >> U[i];
    }

    // DRAMA CLUB
    int d;
    cout<<"Number of students in Drama Club: ";
    cin>>d;

    int Drama[d];
    cout<<"Enter roll numbers of Drama Club members:\n";
    for(i=0;i<d;i++) {
        cin>>Drama[i];
    }

    // SCIENCE CLUB 
    int sc;
    cout<<"Number of students in Science Club: ";
    cin>>sc;

    int Science[sc];
    cout<<"Enter roll numbers of Science Club members:\n";
    for(i=0;i<sc;i++) {
        cin>>Science[i];
    }

    // DISPLAY INPUTS
    cout<<"Universal Set (All Students): ";
    for(i=0;i<total;i++) cout<<U[i]<< " ";
    
    cout<<"\nDrama Club Members: ";
    for(i=0;i<d;i++) cout<<Drama[i]<<" ";
    
    cout<<"\nScience Club Members: ";
    for(i=0;i<sc;i++) cout<<Science[i] << " ";

    // UNION 
    int unionSet[total], uCount = 0;
    for(i=0;i<d;i++) {
        unionSet[uCount++]=Drama[i];
    }
    for(i=0;i<sc;i++) {
        bool present=false;
        for(j =0;j<d;j++) {
            if(Science[i]==Drama[j]) {
                present = true;
                break;
            }
        }
        if(!present) {
            unionSet[uCount++] = Science[i];
        }
    }
    cout<<"\nStudents in at least one club (Union A ∪ B):\n";
    for(i =0;i<uCount;i++) cout<<unionSet[i] << " ";

    // INTERSECTION 
    cout<<"\n\nStudents common in both clubs (A ∩ B):\n";
    for(i=0;i<d;i++) {
        for(j=0;j<sc;j++) {
            if(Drama[i] == Science[j]) {
                cout<<Drama[i]<< " ";
                break;
            }
        }
    }

    //  DIFFERENCE 
    cout<<"\n\nDrama Club only (A - B):\n";
    for(i=0;i<d;i++) {
        bool flag = false;
        for(j=0;j<sc;j++) {
            if(Drama[i] == Science[j]) {
                flag = true;
                break;
            }
        }
        if(!flag) cout<< Drama[i]<< " ";
    }
    cout<<"\n\nScience Club only (B - A):\n";
    for(i=0;i<sc;i++) {
        bool flag = false;
        for(j=0;j<d;j++) {
            if(Science[i] == Drama[j]) {
                flag = true;
                break;
            }
        }
        if(!flag) 
        cout<<Science[i] << " ";
    }
    //COMPLEMENT 
    cout << "\n\nStudents who are not in any club (U - (A ∪ B)):\n";
    for(i=0;i<total;i++) {
        bool inside=false;
        for(j=0;j<uCount;j++) {
            if(U[i] == unionSet[j]) {
                inside = true;
                break;
            }
        }
        if(!inside) 
        cout<<U[i] << " ";
    }
    return 0;
}

