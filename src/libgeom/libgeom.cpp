﻿#include "pch.h"
#include "../include/libgeom.h"

bool AABB::isCollide(const AABB& a, const AABB& b)
{
	
	if(a.min_[0]<a.max_[0]||b.min_[0]<b.max_[0])return true;
	if(a.min_[1]<a.max_[2]||b.min_[1]<b.max_[2])return true;
	
	//return true;
}
