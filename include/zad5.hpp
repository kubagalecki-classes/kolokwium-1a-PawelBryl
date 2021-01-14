#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template <typename T>
void sortujTagliatelle(T b, T e)
{
	sort(b, e, [](const Tagliatelle& t1, const Tagliatelle& t2) {return t1.ileMaki(1) > t2.ileMaki(1); });
}
