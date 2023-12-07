#include <iostream>
#include <string>
using namespace std;
string generateVigenereKey(const string& text, const string& keyword) {
    string vigenereKey;

    for (size_t i = 0; i < text.size(); ++i) {
        vigenereKey.push_back(keyword[i % keyword.size()]);
    }

    return vigenereKey;
}
string vigenereEncrypt(const string& plaintext, const string& vigenereKey) {
    string ciphertext;

    for (size_t i = 0; i < plaintext.size(); ++i) {
        char encryptedChar = ((plaintext[i] + vigenereKey[i]) % 128) + 'A';
        ciphertext.push_back(encryptedChar);
    }

    return ciphertext;
}

int main() {
    string plaintext = "HELLOWORLD";
    string secretKeyword = "KEY";

    string vigenereKey = generateVigenereKey(plaintext, secretKeyword);
    string encryptedText = vigenereEncrypt(plaintext, vigenereKey);

    cout << "Plaintext:  " << plaintext << "\n";
    cout << "Keyword:    " << secretKeyword << "\n";
    cout << "Key used:   " << vigenereKey << "\n";
    cout << "Ciphertext: " << encryptedText << "\n";

    return 0; }