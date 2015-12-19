#include <iostream>
#include <random>

using namespace std;

default_random_engine generator;
int randomInt(int x, int y)
{
	uniform_int_distribution<int> distribution(x, y);
	return distribution(generator);
}

bool randomBool(int chance)
{
    uniform_int_distribution<int> distribution(1, 100);
    return (distribution(generator) <= chance);
}
