#pragma once
#include "Graphics.h"
#include "Geometry.h"
#include <cmath>
#include <string>
namespace Utility
{
	void ClipToBounds(int& x, int& y);
	void ClipToBounds(Point& p);
	bool IsInBounds(int x, int y);
	bool IsInBounds(Point p);
	float Distance(int x1, int y1, int x2, int y2);
	float Distance(Point p1, Point p2);
	bool LinesIntersecting(Line l1, Line l2);
}
namespace Math
{
float CustomFunction1(float x);
float CustomFunction2(float x);
}
