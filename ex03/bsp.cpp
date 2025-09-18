/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:00:52 by omizin            #+#    #+#             */
/*   Updated: 2025/09/18 13:05:19 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed find_square(Point const &p1, Point const &p2, Point const &p3)
{
	Fixed square = Fixed(
		(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())) +
		(p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())) +
		(p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())));
	if (square < Fixed(0))
		square = Fixed(square.toFloat() * -1);
	return square;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ABC = find_square(a, b, c);
	Fixed ABP = find_square(a, b, point);
	Fixed APC = find_square(a, point, c);
	Fixed PBC = find_square(point, b, c);

	if (ABP == Fixed(0) || APC == Fixed(0) || PBC == Fixed(0))
		return false;
	return (ABC == (ABP + APC + PBC));
}
