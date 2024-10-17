/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:18:43 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/06 22:35:48 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <iterator>

class Span {
public:
    // Constructeur qui initialise le Span avec une capacité maximale N
    Span(unsigned int N);

    // Constructeur par copie
    Span(const Span& other);

    // Opérateur d'affectation
    Span& operator=(const Span& other);

    // Destructeur
    ~Span();

    // Ajoute un seul nombre au Span
    void addNumber(int number);

    // Ajoute plusieurs nombres à partir d'une plage d'itérateurs (template)
    template <typename InputIterator>
    void addNumbers(InputIterator begin, InputIterator end) {
        if (std::distance(begin, end) + _numbers.size() > _maxSize) {
            throw std::out_of_range("Not enough space in Span to add the range of numbers");
        }
        _numbers.insert(_numbers.end(), begin, end);
    }

    // Trouve et retourne le plus petit écart entre les nombres stockés
    int shortestSpan() const;

    // Trouve et retourne le plus grand écart entre les nombres stockés
    int longestSpan() const;

    // Retourne la taille actuelle du Span
    unsigned int size() const;

private:
    unsigned int _maxSize;    // Capacité maximale du Span
    std::vector<int> _numbers; // Conteneur pour stocker les nombres
};

#endif
