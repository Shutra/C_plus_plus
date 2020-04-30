/*
	(name header)
*/

#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "CharacterType.h"

const int NUM_OF_KINGDOMS = 7;	// this is the capacity of the array
const std::string KINGDOMS[] = {
	"The North",
	"The Vale",
	"The Stormlands",
	"The Reach",
	"The Westerlands",
	"The Iron Islands",
	"Dorne" 
};

class CandidateType	: public CharacterType
{
public:
	// Default constructor
	// Copy constructor

	// Copy assignment operator

	// updateVotesByKingdom

	// getTotalVotes
	// getVotesByKingdom


	// printCandidateInfo
	// printCandidateTotalVotes

	// Destructor

	
private:
	int totalVotes;
	int numOfKingdoms;
	int *kingdomVotes;
};

#endif
