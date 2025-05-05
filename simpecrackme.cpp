#include <iostream>
#include <string>

using namespace std;

//----------------------------------------------------------------------

int main() {
	setlocale(LC_ALL, "RU");

	cout << "Welcome to the CRACKME BY THESAYREH" << endl;

	unsigned char password[] = { //password S9f#pZ1q!vLt3R0x
		 0x53, 0x39, 0x66, 0x23, 0x70, 0x5A, 0x31, 0x71, 
		0x21, 0x76, 0x4C, 0x74, 0x33, 0x52, 0x30, 0x78, 0x00
	};

	string user_input;
	string user_choise;


	while (true) {
	cout << "To continue, enter the access key: ";
	cin >> user_input;
	cout << "You entered: " << user_input << endl << "Is that correct? (Y/N)" << endl;
	cin >> user_choise;
	if (user_choise == "Y" || user_choise == "y") {
		break;
	}
	else {
		cout << "Please re-enter.\n" << endl;
	}
	}
	if (user_choise == "Y" || user_choise == "y") {
		if (user_input == reinterpret_cast<char*>(password)) {
			cout << "That's right, you're great!" << endl;
		}
		else {
			cout << "Wrong." << endl;
		}
	}


	return 0;
}