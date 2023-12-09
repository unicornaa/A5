
#include <iostream>
#include "A51Cipher.h"

using namespace std;

int main() {
	unsigned long long key = 0x1234567890ABCDEF; // 64-bit key
	unsigned long long frame = 0x134; // Frame number


    A51Cipher cipher(key, frame);
    string plaintext = "Hello, World!";
    string ciphertext = cipher.encrypt(plaintext);

    cout << "Encrypted Text: ";
    for (char c : ciphertext) {
        cout << std::hex << (int)c << " ";
    }
    cout << std::endl;

	return 0;
}