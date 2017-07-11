#include <iostream>
#include "Chyphers.h"

using namespace std;

void main() {
	char Method, Encrypt_Direct;
	char *message;

	do {
		cout << "What Encryption method are yu using?" << endl;
		cout << "Ceasar (c)" << endl;
		cin >> Method;
		cout << endl;
		if (Method != 'c')
			cout << "Please select valid leter of encryption method" << endl;
	} while (Method != 'c');

	do {
		cout << endl << "Are you encrypting a message or decrypting a message?" << endl;
		cout << "Encrypting (e) \n Decrypting (d)" << endl;
		cin >> Encrypt_Direct;
		cout << endl;
		if (Encrypt_Direct != 'e' && Encrypt_Direct != 'd')
			cout << "Please select valid option" << endl;
	} while (Encrypt_Direct != 'e' && Encrypt_Direct != 'd');

	if (Method == 'c') {
		if (Encrypt_Direct == 'e') {
			message = Ceasar_Encrypt();
			cout << "Encrypted message is: " << message << endl;
		}
		else if (Encrypt_Direct == 'd') {
			message = Ceasar_Decrypt();
			cout << "Decrypted message is: " << message << endl;
		}
	}

	if (Method == 'v') {
		if (Encrypt_Direct == 'e') {
			message = Vigenere_Encrypt();
			cout << "Encrypted message is: " << message << endl;
		}
		else if (Encrypt_Direct == 'd') {
			message = Vigenere_Decrypt();
			cout << "Decrypted message is: " << message << endl;
		}
	}

	cout << endl;
	system("PAUSE");
}
