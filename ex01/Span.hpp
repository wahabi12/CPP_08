/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:18:43 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/27 22:32:18 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <iterator>
#include <limits>

class Span {
public:
	Span(unsigned int N);
	
	Span(const Span& other);

	Span& operator=(const Span& other);
	
	~Span();

	void addNumber(int number);

	template <typename InputIterator>
	
	void addNumbers(InputIterator begin, InputIterator end) {
		if (std::distance(begin, end) + _numbers.size() > _maxSize) {
			throw std::out_of_range("Not enough space in Span to add the range of numbers");
		}
		_numbers.insert(_numbers.end(), begin, end);
	}
	int shortestSpan() const;

	int longestSpan() const;

	unsigned int size() const;

private:
	unsigned int _maxSize;
	std::vector<int> _numbers;
};

#endif
