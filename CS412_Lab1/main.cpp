#include <iostream>
#include <string>
#include <limits>
using namespace std;

/*
 The purpose of this function is to encrypt a message using the classic Caesar Cipher:
 The user will be prompted to enter the message and the shift key value.
 
 Note: Since we only studied encryption with lowercase letters (0-25),
 the algorithm works by converting the character to lowercase before encrypting it.
*/

string encryptCaesarCipher(string message, int shift) {
    string encryptedMessage = "";

    // Loop through each character of the message
    for (int i = 0; i < message.length(); i++) {
        char ch = message[i];

        // Convert character to lowercase first
        ch = tolower(ch);

        // Encrypt only alphabetic (lowercase) letters
        if (islower(ch)) {
            // 97 is ASCII for 'a', used to normalize to 0-25 range and shift letters
            ch = char((ch + shift - 97) % 26 + 97);
        }

        // Non-alphabetic characters remain the same
        encryptedMessage += ch;
    }

    return encryptedMessage;
}

bool isNumeric(const string& str) {
    for (char ch : str) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    string message;
    int shift;
    string shiftInput;

    // Input message
    cout << "Enter a message to encrypt: ";
    getline(cin, message);
    
    // Input validation for shift key (must be between 0 and 25)
    while (true) {
        cout << "Enter the shift value (0-25): ";
        cin >> shiftInput;

        // Check if the input is numeric
        if (!isNumeric(shiftInput)) {
            cout << "Invalid input! Please enter a numeric value for the shift." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the incorrect input
            continue;
        }

        // Convert the string to an integer
        shift = stoi(shiftInput);

        // Check if the shift is out of bounds
        if (shift < 0 || shift > 25) {
            cout << "Invalid shift value! Please enter a value between 0 and 25." << endl;
        } else {
            break; // Valid input, break out of the loop
        }
    }

    // Call the encryption function and display the result
    string encryptedMessage = encryptCaesarCipher(message, shift);
    cout << "Encrypted Message: " << encryptedMessage << endl;

    return 0;
}
