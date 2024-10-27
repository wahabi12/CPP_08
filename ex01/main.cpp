/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:18:01 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/27 23:11:47 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	try {
		Span sp = Span(10);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		std::vector<int> moreNumbers;
		moreNumbers.push_back(1);
		moreNumbers.push_back(2);
		moreNumbers.push_back(3);
		moreNumbers.push_back(4);
		moreNumbers.push_back(5);

		Span sp2(10);
		sp2.addNumbers(moreNumbers.begin(), moreNumbers.end());
		sp2.addNumber(10);
		sp2.addNumber(20);

		std::cout << "Shortest span in sp2: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span in sp2: " << sp2.longestSpan() << std::endl;
		
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
