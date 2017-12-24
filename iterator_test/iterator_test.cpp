#include <list>
#include <iostream>

int main(void) {
	std::list<int> int_list;
	std::list<int>::const_iterator it;

	for(int i = 1; i < 10; i++) {
		int_list.push_back(i);
	}

	for (it = int_list.begin(); it != int_list.end(); ++it) {
		std::cout << *it << std::endl;
	}

	return 0;
}
