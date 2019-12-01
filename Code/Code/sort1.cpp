#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>


int main()
{
	std::vector<int> vec(100);
	for (int i = 0; i < 100; ++i)
	{
		vec[i] = (int)rand();
	}
	for_each(vec.begin(), vec.end(), [](int value) {std::cout << value << std::endl; });

	std::sort(vec.begin(), vec.end(),std::greater<int>());
	std::cout << "½µÐòÅÅÐòºó¡£¡£¡£" << std::endl;
	for_each(vec.begin(), vec.end(), [](int value) {std::cout << value << std::endl; });
	std::sort(vec.begin(), vec.end(), std::less<int>());
	std::cout << "ÉýÐòÅÅÐòºó¡£¡£¡£" << std::endl;
	for_each(vec.begin(), vec.end(), [](int value) {std::cout << value << std::endl; });

	system("pause");
	return  0;
}