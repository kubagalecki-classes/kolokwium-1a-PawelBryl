#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
public:
	virtual double ileMaki(unsigned P) const = 0;
	static Makaron* gotujMakaron(const std::string& s);
	virtual  ~Makaron() = default;
};
// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{
private:
	double L;
	double W;
	double R;
  static const double C;
public:
	Tagliatelle() : L(0.5), W(0.5), R(0.5) {}
	Tagliatelle(double l, double w, double r) : L(l), W(w), R(r) {}
	double ileMaki(unsigned P) const override { return P * L * W * (1. - R) * C; }
};
