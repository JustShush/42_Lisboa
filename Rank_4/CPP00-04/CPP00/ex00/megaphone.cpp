#include <iostream>
#include <cstring>

int	main(int argc, char *argv[])
{
	if (argc <= 1) {
		std::cout << "* LOUD AND UNBERABLE FEEBACK NOISE *" << std::endl;
		return (0);
	}
	int j = 1;
	while (argv[j]) {
		int i = 0;
		while (argv[j][i]) {
			std::cout << (char)toupper(argv[j][i]);
			i++;
		}
		j++;
	}
	std::cout << "\n";
	return (0);
}

