//
//  main.cpp
//  cracking1.3
//
//  Created by Daren Sathy on 8/31/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

void replaceSpaces (string input) {
    string rep = "%20";
    for (int i = 0; i < input.length(); i++) {
        if(input[i] == ' ') {
            input.replace(i,1,rep);
        }
    }
    cout << "Your output is: "<< input << endl;
}

int main() {
    string input = "Daren watches anime";
    replaceSpaces(input);
    return 0;
}
