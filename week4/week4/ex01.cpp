#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename;    
    cout << "Enter filename: "; 
    getline(cin, filename);    // read the whole line including spaces

    // 1. Write initial entries
    ofstream outFile(filename);   // open file for writing
    if (!outFile.is_open()) {      // sanity check  
        cout << "Cannot open file for writing\n";
        return 1;
    }
    // TODO: write 5 lines "Name score"
    outFile << "Lenn  90\n";
    outFile << "Nana  90\n";
    outFile << "slenn 70\n";
    outFile << "neeln 60\n";
    outFile << "zayn 50\n";

    outFile.close();

    // 2. Read and display
    ifstream inFile(filename); // open file for reading
    if (!inFile.is_open()) { // sanity check
        cout << "Cannot open file for reading\n";
        return 1;
    }

    // TODO: read loop and print
    string name;
    int score;

    cout << "Contents of " << filename << ":\n";
    while (inFile >> name >> score) {   // read name and score
        cout << name << " " << score << "\n";
    }

    inFile.close(); // close file

    return 0;
}