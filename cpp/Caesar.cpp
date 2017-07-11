#include "Cyphers.h"

char Caesar_Message[1000];

char *Ceasar_Encrypt() {
	char ch;
	int key;

	cout << "Enter a message to encrypt: " << endl;
	cin >> Caesar_Message;
	cout << "Enter key (number): " << endl;
	cin >> key;

	for (int i = 0; Caesar_Message[i] != '\0'; ++i) {
		ch = Caesar_Message[i];

		if (ch >= 'a' && ch <= 'z') {
			ch = ch + key;
			if (ch > 'z')
				ch = ch - 'z' + 'a' - 1;
			Caesar_Message[i] = ch;
		}else if (ch >= 'A' && ch <= 'Z') {
			ch = ch + key;
			if (ch > 'Z')
				ch = ch - 'Z' + 'A' - 1;
			Caesar_Message[i] = ch;
		}
	}
	return Caesar_Message;
}

char *Ceasar_Decrypt() {
	char ch;
	int key;

	cout << "Enter a Caesar_Message to decrypt: " << endl;
	cin >> Caesar_Message;
	cout << "Enter key (number): " << endl;
	cin >> key;

	for (int i = 0; Caesar_Message[i] != '\0'; ++i) {
		ch = Caesar_Message[i];

		if (ch >= 'a' && ch <= 'z') {
			ch = ch - key;
			if (ch < 'a')
				ch = ch + 'z' - 'a' + 1;
			Caesar_Message[i] = ch;
		}else if (ch >= 'A' && ch <= 'Z') {
			ch = ch - key;
			if (ch < 'A')
				ch = ch + 'Z' - 'A' + 1;
			Caesar_Message[i] = ch;
		}
	}
	return Caesar_Message;
}
