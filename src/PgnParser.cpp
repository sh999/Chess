#include "PgnParser.h"

PgnParser::PgnParser(std::string inputPath){
	std::cout << "In PgnParser constructor\n";
	std::ifstream inputFile(inputPath);
	std::string line;
	if(inputFile.is_open()){
		int lineNumber = 0;
		while(getline(inputFile, line)){
			// std::cout << "line = " << line << "\n";
			
			if(lineNumber == 11){
				std::cout << "line = " << line << "\n";
				PgnToString.insert(std::pair<std::string, std::string>("Moves",line));
			}
			lineNumber = lineNumber + 1;
		}

	}
	else{
		std::cout << "Error opening file\n";
	}
}