/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:42:37 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/17 04:57:45 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iterator>
#include <iostream>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
public:

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}
	virtual ~MutantStack() {}

	MutantStack<T>& operator=(const MutantStack<T>& other) {
		if (this != &other) {
			std::stack<T>::operator=(other);
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() {
		return this->c.begin();
	}
	
	const_iterator begin() const {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
	
	const_iterator end() const {
		return this->c.end();
	}

	reverse_iterator rbegin() {
		return this->c.rbegin();
	}

	const_reverse_iterator rbegin() const {
		return this->c.rbegin();
	}

	reverse_iterator rend() {
		return this->c.rend();
	}

	const_reverse_iterator rend() const {
		return this->c.rend();
	}
};

#endif
