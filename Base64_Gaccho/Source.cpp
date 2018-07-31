#include "Base64.hpp"
#include <iostream>

int main()
{
	std::cout << base64_Encode("Hello World!") << std::endl;
	std::cout << base64_Decode("SGVsbG8gV29ybGQh") << std::endl;
	return 0;
}