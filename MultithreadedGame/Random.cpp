﻿#include "Random.h"

Random::Random(const int min, const int max) :
	_generator(_rd()),
	_distribution(min, max)
{
}

int Random::operator()()
{
	return _distribution(_generator);
}
