#include "Cyphers.h"

char message[1000];

char *Ceasar_Encrypt() {
	char ch;
	int key;

	cout << "Enter a message to encrypt: " << endl;
	cin >> message;
	cout << "Enter key (number): " << endl;
	cin >> key;

	for (int i = 0; message[i] != '\0'; ++i) {
		ch = message[i];

		if (ch >= 'a' && ch <= 'z') {
			ch = ch + key;
			if (ch > 'z') 
				ch = ch - 'z' + 'a' - 1;
			message[i] = ch;
		}else if (ch >= 'A' && ch <= 'Z') {
			ch = ch + key;
			if (ch > 'Z')
				ch = ch - 'Z' + 'A' - 1;
			message[i] = ch;
		}
	}
	return message;
}

char *Ceasar_Decrypt() {
	char ch;
	int key;

	cout << "Enter a message to decrypt: " << endl;
	cin >> message;
	cout << "Enter key (number): " << endl;
	cin >> key;

	for (int i = 0; message[i] != '\0'; ++i) {
		ch = message[i];

		if (ch >= 'a' && ch <= 'z') {
			ch = ch - key;
			if (ch < 'a')
				ch = ch + 'z' - 'a' + 1;
			message[i] = ch;
		}else if (ch >= 'A' && ch <= 'Z') {
			ch = ch - key;
			if (ch < 'A')
				ch = ch + 'Z' - 'A' + 1;
			message[i] = ch;
		}
	}
	return message;
}
