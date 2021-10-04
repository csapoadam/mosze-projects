#include <iostream>
#include <math.h>

#include "path.h"

Path::Path(int ptCount) : n(ptCount) {
	//! A metoduson belul is...
	pts = new Point[n];
	//! lehet kismillio komment
}

Path::Path(const Path& other) : n(other.n) {
	pts = new Point[n];
	for (int i = 0; i < n; i++) {
		Point otherPoint = other.getPoint(i);
		*(pts + i) = Point(otherPoint.x, otherPoint.y);
	}
}

Path::~Path() {
	delete[] pts;
}

Path& Path::operator=(const Path& other) {
	Path copyOfOther(other);
	const_cast<int&>(this->n) = copyOfOther.n;
	
	Point* arrayToDelete = this->pts;
	pts = copyOfOther.pts;
	copyOfOther.pts = arrayToDelete;

	return *this;
}

//! Sets point at a given index. Backslash sa stands for 'see also'
	/*!
	  \param index Index value ranging from 0 to n-1
	  \param value A point object
	  \return Does not return anything
	  \sa Point
	*/
void Path::setPoint(int index, Point value) {
	*(pts + index) = value;
}

Point Path::getPoint(int index) const {
	return *(pts + index);
}

int Path::getPointCount() const {
	return n;
}

double Path::getLength() const {
	double retval = 0.0;
	for (int inx = 0; inx < n-1; inx++) {
		Point* currentPointAddr = pts + inx;
		Point* nextPointAddr = pts + inx + 1;
		double distance = sqrt(
			pow((currentPointAddr->x - nextPointAddr->x),2) +
			pow((currentPointAddr->y - nextPointAddr->y),2)
		);
		retval += distance;
	}
	return retval;
}

void Path::print(std::ostream& os) const {
	for (int i = 0; i < n; i++) {
		std::cout << (*(pts + i)).x << " " << (*(pts + i)).y << std::endl;
	}
}