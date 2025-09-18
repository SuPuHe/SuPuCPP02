/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:00:58 by omizin            #+#    #+#             */
/*   Updated: 2025/09/18 13:04:35 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point a(-1, 3);
	Point b(-3, -3);
	Point c(4, -4);

	Point p1(0, -2);
	Point p2(-1, 3);

	std::cout << "p1 inside? " << (bsp(a, b, c, p1) ? "yes" : "no") << std::endl;
	std::cout << "p2 inside? " << (bsp(a, b, c, p2) ? "yes" : "no") << std::endl;
}

//desmos || mathway
