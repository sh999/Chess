#ifndef pgnparser_h
#define pgnparser_h
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

class PgnParser{
public:
	PgnParser(std::string inputPath); 
private:
	std::map<std::string, std::string> parsePgn(std::string inputPgn); // Parse config information and moves list
	std::map<std::string, std::string> PgnToString; // Config info (square brackets in pgn and the result)
};

#endif