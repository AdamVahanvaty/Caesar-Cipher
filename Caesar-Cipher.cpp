#include <iostream>
#include <string>

// Function to encrypt plaintext using Caesar Cipher
std::string encrypt(std::string plaintext, int shift) {
    std::string ciphertext = "";
    for (int i = 0; i < plaintext.length(); i++) {
        // Encrypt uppercase characters
        if (std::isupper(plaintext[i])) {
            ciphertext += char(int(plaintext[i] + shift - 65) % 26 + 65);
        }
        // Encrypt lowercase characters
        else if (std::islower(plaintext[i])) {
            ciphertext += char(int(plaintext[i] + shift - 97) % 26 + 97);
        }
        // Ignore other characters (e.g. spaces)
        else {
            ciphertext += plaintext[i];
        }
    }
    return ciphertext;
}

int main() {
    std::string plaintext;
    int shift;
    std::cout << "Enter Plaintext: ";
    std::getline(std::cin, plaintext);
    std::cout << "Enter the shift value: ";
    std::cin >> shift;
    std::string ciphertext = encrypt(plaintext, shift);
    std::cout << "Ciphertext: " << ciphertext << "\n";
    system("pause");
    return 0;
}
