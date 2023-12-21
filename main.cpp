#include "./CipherTool.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string originalText, secretCode, finalText;
	CipherTool Cipher;

	//get text from user
	cout << "Enter the message to be encoded. \n";
	getline(cin, originalText);

	// Send the text to be encoded and display result
	secretCode = Cipher.Encode(originalText);
	cout << "\nHere is the encoded message\n" << secretCode << endl;

	// Send the encoded text back to be decoded and display result
	finalText = Cipher.Decode(secretCode);
	cout << "\nHere is the decoded message\n" << finalText << endl;

	return 0;
}
