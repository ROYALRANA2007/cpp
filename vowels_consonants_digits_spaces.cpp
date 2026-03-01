#include <iostream>
using namespace std;

int main() {
    string text;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter a string: ";
    getline(cin, text);   

    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of spaces: " << spaces << endl;

    return 0;
}