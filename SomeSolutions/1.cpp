#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
	int a, b;
	if (argc > 1) {
		std::ifstream input;
		input.open(argv[1]);
		if (input.is_open() && input.peek() != EOF) {
			input >> a >> b;
		}
		input.close();
		std::ofstream output;
		output.open("output.txt");

		output << a + b << std::endl;
		output.close();
	} else {
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
	}
	
	return 0;
}