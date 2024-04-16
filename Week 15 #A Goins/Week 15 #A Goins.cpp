// Ethan Goins
// CIS 1202 101
// April 16, 2024
// Exceptions, Templates, and Standard Template Library (STL) #A

#include"goinsLib.h"
#include"character.h"

char characterj(char start, int offset);

int main() {
	char h = 'h';
	int g = 3;

	try {
		char t = character(h,g);
		cout << "The offset char is " << t << endl;
	}
	catch (character::invalidCharacterException) {

	}
	catch (character::invalidRangeExecption) {

	}

	endProgram();
}

char characterj(char start, int offset)
{
	if (!isalpha(start))
	{
		throw character::invalidCharacterException();
	}
	if (!isalpha(start + offset))
	{
		throw character::invalidRangeException();
	}
	char newChar = start + offset;
	return newChar;
}
