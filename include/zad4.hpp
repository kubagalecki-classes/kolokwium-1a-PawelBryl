#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle> v)
{
	double M = 0;
	for (int i = v.size() - 1; i >= 0; --i) {
		if (i == (v.size() - 1)) M += v[i].ileMaki(1);
		if (i == (v.size() - 2)) M += v[i].ileMaki(2);
		if (i == (v.size() - 3)) M += v[i].ileMaki(3);
	}
	if (M > 100) throw 1;
	if (M > 50 && M <= 100) throw 0.5;
	if (M <= 50) return M;	
}
