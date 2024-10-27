/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:12:31 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/27 22:29:10 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	std::cout << "Testing with std::vector:" << std::endl;
	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Value found: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator it = easyfind(vec, 42);
		std::cout << "Value found: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::list<int> lst;
	for (int i = 0; i < 10; i++) {
		lst.push_back(i * 2);
	}

	std::cout << "Testing with std::list:" << std::endl;
	try {
		std::list<int>::iterator it = easyfind(lst, 4);
		std::cout << "Value found: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::list<int>::iterator it = easyfind(lst, 3);
		std::cout << "Value found: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
