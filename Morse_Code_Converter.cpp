#include <iostream>
#include <map>
#include <sstream>
using namespace std;

map<char, string> morseCode = {
    {'A', ".-"},   {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
    {'E', "."},    {'F', "..-."}, {'G', "--."},  {'H', "...."},
    {'I', ".."},   {'J', ".---"}, {'K', "-.-"},  {'L', ".-.."},
    {'M', "--"},   {'N', "-."},   {'O', "---"},  {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."},  {'S', "..."},  {'T', "-"},
    {'U', "..-"},  {'V', "...-"}, {'W', ".--"},  {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."},
    {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"},
    {' ', "/"}
};

map<string, char> reverseMorseCode;

void initializeReverseMorse() {
    for (auto &pair : morseCode) {
        reverseMorseCode[pair.second] = pair.first;
    }
}

string textToMorse(string text) {
    string morse = "";
    for (char &ch : text) {
        ch = toupper(ch);
        if (morseCode.count(ch)) {
            morse += morseCode[ch] + " ";
        }
    }
    return morse;
}

string morseToText(string morse) {
    stringstream ss(morse);
    string word, text = "";
    while (ss >> word) {
        if (reverseMorseCode.count(word)) {
            text += reverseMorseCode[word];
        }
    }
    return text;
}

int main() {
    initializeReverseMorse();
    int choice;
    string input;
    
    cout << "Morse Code Converter\n";
    cout << "1. Convert Text to Morse Code\n2. Convert Morse Code to Text\nChoose an option: ";
    cin >> choice;
    cin.ignore();
    
    if (choice == 1) {
        cout << "Enter text: ";
        getline(cin, input);
        cout << "Morse Code: " << textToMorse(input) << endl;
    } else if (choice == 2) {
        cout << "Enter Morse Code (separate characters with spaces and words with '/'): ";
        getline(cin, input);
        cout << "Text: " << morseToText(input) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
