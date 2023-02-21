#include "caesar_cipher.h"
#include <string>

int CaesarCipher::m_key;

void CaesarCipher::SetKey(int key) {
	m_key = key;
}

int CaesarCipher::GetKey() {
	return m_key;
}

void CaesarCipher::Encrypt(char* plaintext, char* ciphertext, int n) {
	/*for (int i = 0; i < n; i++) {
		if (isalpha(plaintext[i])) {
			ciphertext[i] = 'a' + static_cast<char>(((plaintext[i] - 'a') + m_key) % 26);
		}
	}*/
	for (int i = 0, j = 0; i < n; i++) {
		if (plaintext[i] == NULL) return;
		if (plaintext[i] == ' ') {
			ciphertext[i] = ' ';
		}
		else 
		    ciphertext[i] = plaintext[i] + m_key;
	}
}

void CaesarCipher::Decrypt(char* ciphertext, char* plaintext, int n) {
	for (int i = 0, j = 0; i < n; i++) {
		if (ciphertext[i] == NULL) return;
		if (ciphertext[i] == ' ') {
			ciphertext[i] = ' ';
		}
		else
			ciphertext[i] = ciphertext[i] - m_key;
	}
}