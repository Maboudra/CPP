#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

typedef std::string str;

void	getNewLine(str &line, str str1, str str2) {
	size_t	start = 0;

	while ((start = line.find(str1, start)) != str::npos) {
		line = line.substr(0, start) + str2 + line.substr(start + str1.length());
		start += str2.length();
	}
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Error: wrong number of arguments"; return 0;
	}
	
	str				input_file = av[1];
	str				str1 = av[2];
	str				str2 = av[3];
	str				line;
	str				output_file = input_file + ".replace";

	std::ifstream	input(input_file.c_str());
	std::ofstream	output(output_file.c_str());
	
	if (input.is_open()) {
		while (std::getline(input, line)) {
			getNewLine(line, str1, str2);
			output << line;
			if (!input.eof())
				output << std::endl;
		}
		input.close();
		output.close();
	}
	else
		std::cout << "Error: cannot open file." << std::endl;
	return 0;
}