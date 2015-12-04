#include <iostream>
#include <random>

using namespace std;

default_random_engine generator;
int randomInt(int x, int y)
{
	uniform_int_distribution<int> distribution(x, y);
	return distribution(generator);
}
