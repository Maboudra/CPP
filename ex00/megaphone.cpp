#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac != 1)
	{
		int i = 1;
		while (av[i])
		{
			int j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return 0;
}
