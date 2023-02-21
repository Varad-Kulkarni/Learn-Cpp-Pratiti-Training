#pragma once

class CaesarCipher {
public:
	static void SetKey(int key);
	static int GetKey();
	static void Encrypt(char* plaintext, char* ciphertext, int capacity);
	static void Decrypt(char* plaintext, char* ciphertext, int capacity);
private:
	static int m_key;
};
