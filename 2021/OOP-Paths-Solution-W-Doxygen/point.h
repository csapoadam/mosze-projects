#pragma once

#include <string>

/*! \brief Point class. Ez egy brief description.
 *         Brief description continued, egeszen az uj sorig bezarolag.
 *
 *  Ez pedig mar a reszletes leirashoz tartozik.
 */
struct Point {
	/*! \brief x coordinate of Point - ez egy brief leiras... */
	double x;
	double y; /*!< y coordinate of Point - ez egy detailed leiras */
	std::string name; //!< Ha nincs zaro csillag meg per jel, akkor brief leiras
	Point() : x(0), y(0), name("") {} //!< Default constructor for new[]
	Point(double x, double y) : x(x), y(y), name("") {} //!< Constructor with 2D params
}; 