#include <iostream>
int main()
{
	//std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
	//std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
	//std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
	//std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;
	//std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;
	//std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
	//std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
	//std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
	//std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
	//std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
	//std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
	//std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;

	{	
	
		std::cout << "\a Attention!" << std::endl;
		std::cout << "Hello everybody!\nI'm Victor!\nHow are you?\n" << std::endl;
		std::cout << "\tThat's one tab!\n\t\tAnd that's two tabs!\n\n";
		
		std::cout << "\"This is quoted text\"\n";
		std::cout << "This string contains a single backslash \\" << std::endl;
		std::cout << "6F in hex is char \'\x6F\'\n" << std::endl;
		
		int z{ 5 };
		std::cout << "z: " << z << std::endl;

		int x = 013; // 0 перед значением означает, что это восьмеричный литерал
		std::cout<< "octonary literal x: " << x << std::endl;

		int y = 0xD; // 0x перед значением означает, что это шестнадцатеричный литерал
		std::cout << "hexadecimal literal y: " << y << std::endl;
		return 0;
	}
	
	return 0;
}