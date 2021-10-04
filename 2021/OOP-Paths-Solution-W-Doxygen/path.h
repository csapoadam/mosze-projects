#pragma once

#include "point.h"

class Path {
	const int n; //!< pointCount - mivel privat, nem generalja le!
	Point* pts;
public:
	Path(int ptCount); //!< A constructor
	Path(const Path&); //!< Copy constructor
	~Path(); //!< Destructor
	Path& operator=(const Path&); //!< Copy assignment
	void setPoint(int index, Point value); // ehhez majd ld. a definicional...
	Point getPoint(int index) const; //!< getter
	int getPointCount() const; //!< Ezek mind const metodusok, mert ... miert is?
	double getLength() const; //!< getter
	void print(std::ostream&) const; //!< Ennek atadhatjuk pl. az std::cout objektumot
};
