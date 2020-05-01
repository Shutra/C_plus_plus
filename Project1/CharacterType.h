/*
	(name header)
*/

#ifndef CHARACTERTYPE_H
#define CHARACTERTYPE_H

#include <iostream>
#include <string>

class CharacterType
{
public:
	// Default constructor
	CharacterType() { id = 0; }

	// Overloaded constructor
	CharacterType(std::string& newFirstName, std::string& newLastName, int newId);

	// setCharacterInfo
	void setCharacterInfo(std::string& newFirstName, std::string& newLastName, int newId);

	// getFirstName
	std::string getFirstName() const;

	// getLastName
	std::string getLastName() const;

	// getID
	int getID() const;

	// printName
	void printName() const;

	// printCharacterInfo
	void printCharacterInfo() const;

	// printID
	void printID() const;

	// Destructor
	~CharacterType();
private:
	std::string firstName;	
	std::string lastName;	
	int id;					
};

#endif 

