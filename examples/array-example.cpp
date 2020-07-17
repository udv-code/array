// Copyright (c) 2020 udv. All rights reserved.

#include <iostream>

#include <ustl/array.hpp>

int main(int argc, char **argv) {
	ustd::array<int, 10> collection{};

	// for (auto i : collection) {
	// 	std::cout << i << "\n";
	// }
	//
	// for (auto& i : collection) {
    //     i = 1;
	// }

	for (size_t i = 0; i < collection.size(); ++i) {
		std::cout << collection[i] << "\n";
	}

	return 0;
}