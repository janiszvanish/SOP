#include <stdlib.h>
#include <iostream>

auto main(int argc, char* argv[]) -> int {

		auto zmienna = argv[1];
		
		
		auto result = getenv(zmienna);
		
		if(result != nullptr){
			std::cout << result << "\n";
		}
		
		return 0;
}
