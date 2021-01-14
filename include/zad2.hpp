#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
	double ileMaki(unsigned P) const override { return static_cast<double> (P); };
};

// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(const std::string& s)
{
	char firstChar = s.at(0);
	char lastChar = s.at(s.length() - 1);
	if (firstChar == lastChar) return new Tagliatelle(3.14, 0.42, 0.1);
	else return new Penne();
}
