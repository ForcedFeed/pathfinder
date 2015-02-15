/*PathStep Class for A* Pathfinding in cocos2d-x.
Based on the A* Algorithm and discussions from 
the cocos2d-x community http://discuss.cocos2d-x.org
Homepage: http://www.forcedfeed.com
GitHub: http://github.com/forcedfeed

 The MIT License (MIT)

Copyright (c) 2013 David Axsom 

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/

#include "cocos2d.h"
USING_NS_CC;

class PathStep : Object
{
private:
	Point position;
	int gScore;
	int hScore;
	int fScore;
	int index;
	PathStep *parent;

public:

	bool initWithPosition(Point pos);
	bool isEqual(Point other);

	int getFScore();
	int getGScore();
	int getHScore();
	int getIndex();
	Point getPosition();
	PathStep* getParent();

	void setGScore(int gScore);
	void setHScore(int hScore);
	void setIndex(int index);
	void setPosition(Point pos);
	void setParent(PathStep* parent);
};
