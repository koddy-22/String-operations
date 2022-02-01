#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char menu() {
    bool valid = false;
    char choice;

    do {
        cout <<"    *-------------------------------*\n";
        cout <<"    |                               |\n";
        cout <<"    |       String Operations       |\n";
        cout <<"    |                               |\n";
        cout <<"    *-------------------------------*\n\n";
        cout <<"[1] Change all to UPPERCASE\n";
        cout <<"[2] Change all to lowercase\n";
        cout <<"[3] Swap UPPERCASE and lowercase\n";
        cout <<"[4] Make first character UPPERCASE\n";
        cout <<"[0] Exit\n Your choice --> ";
        cin >> choice;
        
        if(choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '0') {
            valid = true;
        }
        else {
            cout <<"Error! Invalid input\n";
            valid = false;
        }
    }
    while(!valid);

    return choice;
}

void UPPERCASE() {
    string str, newStr;
    cout <<"Enter your string\n--> ";
    cin.ignore();
    getline(cin, str);
    cout << endl;
    newStr = str;
    for (int i = 0; i < newStr.length(); i++) {
        newStr[i] = toupper(newStr[i]);
    }
    cout << str << " ===> " << newStr << endl;
}

void lowercase() {
    string str, newStr;
    cout << "Enter your string\n--> ";
    cin.ignore();
    getline(cin, str);
    cout << endl;
    newStr = str;
    for (int i = 0; i < newStr.length(); i++) {
        newStr[i] = tolower(newStr[i]);
    }
    cout << str << " ===> " << newStr << endl;
}

void swapCase() {
    string str, newStr;
    cout << "Enter your string\n--> ";
    cin.ignore();
    getline(cin, str);
    cout << endl;
    newStr = str;
    for (int i = 0; i < newStr.length(); i++) {
        if (newStr[i] == tolower(newStr[i])) {
            newStr[i] = toupper(newStr[i]);
        }
        else {
            newStr[i] = tolower(newStr[i]);
        }
    }
    cout << str << " ===> " << newStr << endl;
}

void firstUPPER() {
    string str, newStr;
    cout << "Enter yourt string\n--> ";
    cin.ignore();
    getline(cin, str);
    cout << endl;
    newStr = str;
    for (int i = 0; i < newStr.length(); i++) {
        if (i == 0 || (newStr[i-1] == ' ')) {
            newStr[i] = toupper(newStr[i]);
        }
        else {
            newStr[i] = tolower(newStr[i]);
        }
    }
    cout << str << " ===> " << newStr <<endl;
}

int main() {
    char Choice;

    do {
        Choice = menu();
        switch (Choice) {
            case '1': UPPERCASE();  break;
            case '2': lowercase();  break;
            case '3': swapCase();   break;
            case '4': firstUPPER(); break;
        }
    }
    while (Choice != '0');

    return 0;
}