// Ethan Goins
// CIS 1202 101
// April 16, 2024
// Exceptions, Templates, and Standard Template Library (STL) #A

#include"goinsLib.h"
#include"exceptions.h"

char character(char start, int offset);																			// Functions
void testCase(char, char, int);

int main() {
	char multiuseChar = 'a';																					// Variables
	int multiuseNum = 1;
	char multiuseCase = ' ';

	testCase(multiuseCase, multiuseChar, multiuseNum);															// Test cases with different values
	multiuseCase = ' ';
	multiuseNum = -1;
	testCase(multiuseCase, multiuseChar, multiuseNum);
	multiuseCase = ' ';
	multiuseChar = 'Z';
	testCase(multiuseCase, multiuseChar, multiuseNum);
	multiuseCase = ' ';
	multiuseChar = '?';
	multiuseNum = 5;
	testCase(multiuseCase, multiuseChar, multiuseNum);

	endProgram();
}

char character(char start, int offset)																			// Checks to make sure everything is valid if not throws and exception
{
	if (!isalpha(start))
	{
		throw exceptions::invalidCharacterException();
	}
	if (!isalpha(start + offset))
	{
		throw exceptions::invalidRangeException();
	}
	char newChar = start + offset;
	if (tolower(start) == tolower(newChar))
	{
		throw exceptions::invalidCaseTransition();
	}
	return newChar;
}

void testCase(char multiuseCase, char multiuseChar, int multiuseNum)										// Displays the offset character, or tells the user what exception they triggered
{
	try {
		multiuseCase = character(multiuseChar, multiuseNum);
		cout << "The offset char is " << multiuseCase << "\n\n";
	}
	catch (exceptions::invalidCharacterException) {
		cout << "Invalid character execption\n\n";
	}
	catch (exceptions::invalidRangeException) {
		cout << "Invalid range execption\n\n";
	}
	catch (exceptions::invalidCaseTransition) {
		cout << "Invalid case transition";
	}
}
