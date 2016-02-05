#include <iostream>
#include <string>

using namespace std;

int main() {
	string answer = "Watson";
	string rensponse;
	cout << "Let's play a guessing game. "
		<< "You get three tries. " << endl;
	cout << "What is the name of the "
		<< "Computer that played Jeopardy? ";
	getline(cin, rensponse);
	if (rensponse == answer) {
		cout << "That's right!" << endl;
	}
	else {
		cout << "No, that's not right. Try again." << endl;
		cout << "What is the name of the "
			<< "Computer that played Jeopardy? ";
		getline(cin, rensponse);
		if (rensponse == answer) {
			cout << "That's right!" << endl;
		}
		else {
			cout << "That's still not right. One more try." << endl;
			cout << "What is the name of the "
				<< "Computer that played Jeopardy? ";
			getline(cin, rensponse);
			if (rensponse == answer) {
				cout << "That's right!" << endl;
			}
			else {
				cout << "Sorry you're out of try. The correct answer was " << answer << "." << endl;
			}
		}
	}
	return 0;
}