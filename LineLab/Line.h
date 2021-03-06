/*
 * Line.h
 *
 *  Created on: Apr 18, 2017
 *      Author: othscs253
 */

#ifndef LINE_H_
#define LINE_H_

#include <string>
#include <cassert>

class Line {

	int point1X, point2X, point1Y, point2Y;
	double slope, xInt, yInt;

public:

	Line(int p1x, int p2x, int p1y, int p2y) {
		point1X = p1x;
		point2X = p2x;
		point1Y = p1y;
		point2Y = p2y;
		assert(p2x - p1x != 0);
		slope = (p2y - p1y) / (p2x - p1x);
		yInt = p1y - slope * p1x;
		xInt = (-yInt) / slope;
	}

	void fixVars();
	std::string print();

	int getPoint1X() const {
		return point1X;
	}

	void setPoint1X(int point1X) {
		this->point1X = point1X;
		fixVars();
	}

	int getPoint1Y() const {
		return point1Y;
	}

	void setPoint1Y(int point1Y) {
		this->point1Y = point1Y;
		fixVars();
	}

	int getPoint2X() const {
		return point2X;
	}

	void setPoint2X(int point2X) {
		this->point2X = point2X;
		fixVars();
	}

	int getPoint2Y() const {
		return point2Y;
	}

	void setPoint2Y(int point2Y) {
		this->point2Y = point2Y;
		fixVars();
	}

	double getSlope() const {
		return slope;
	}

	double getXInt() const {
		return xInt;
	}

	double getYInt() const {
		return yInt;
	}


};


#endif /* LINE_H_ */
