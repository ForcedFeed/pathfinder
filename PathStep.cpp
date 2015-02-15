/*PathStep Class for A* Pathfinding in cocos2d-x.
Based on the A* Algorithm and discussions from
the cocos2d-x community at http://discuss.cocos2d-x.org
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

#include "PathStep.h"

USING_NS_CC;

bool PathStep::initWithPosition(Point pos)
{
		position = pos;
		gScore = 0;
		hScore = 0;
		fScore = 0;
		index = 0;
		parent = nullptr;

	return this;
}
bool PathStep::isEqual(Point other){
	return this->getPosition().equals(other);
}

//getters
int PathStep::getFScore()
{
	return this->gScore + this->hScore;
}

int PathStep::getGScore()
{
	return this->gScore;
}
int PathStep::getHScore()
{
	return this->hScore;
}
int PathStep::getIndex()
{
	return this->index;
}
Point PathStep::getPosition()
{
	return this->position;
}

PathStep* PathStep::getParent()
{
	return this->parent;
}
//setters
void PathStep::setGScore(int gScore)
{
	this->gScore = gScore;
}

void PathStep::setHScore(int hScore)
{
	this->hScore = hScore;
}
void PathStep::setIndex(int index)
{
	this->index = index;
}
void PathStep::setPosition(Point pos)
{
	this->position = pos;
}
void PathStep::setParent(PathStep* parent)
{
	this->parent = parent;
}
