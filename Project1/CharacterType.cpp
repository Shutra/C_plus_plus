/*
	(name header)
*/

#include "CharacterType.h"

using namespace std;

// Implement all functions in the SAME order
// as listed in the interface file.
// Default constructor
CharacterType::CharacterType()
{
	id = 0;
}

// Overloaded constructor
CharacterType::CharacterType(const std::string& newFirstName, 
	const std::string& newLastName,const int newId)
{
	firstName = newFirstName;
	lastName = newLastName;
	id = newId;
}

// setCharacterInfo
void CharacterType::setCharacterInfo(const std::string& newFirstName,
	const std::string& newLastName, const int newId)
{
	firstName = newFirstName;
	lastName = newLastName;
	id = newId;
}

// getFirstName
string CharacterType::getFirstName() const
{
	return firstName;
}

// getLastName
string CharacterType::getLastName() const
{
	return lastName;
}

// getID
int CharacterType::getID() const
{
	return id;
}

// printName
void CharacterType::printName() const
{
	cout << lastName << ", " << firstName;
}

// printCharacterInfo
void CharacterType::printCharacterInfo() const
{
	cout << "ID# " << id << " " << firstName << " " << lastName;
}

// printID
void CharacterType::printID() const
{
	cout << "ID# " << id;
}

// Destructor
CharacterType::~CharacterType() {}