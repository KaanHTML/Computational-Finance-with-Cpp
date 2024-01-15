#include <iostream>
#include "PathDepOption.h"
using namespace std;

int main()
{
	double S0 = 100.0, r=0.03, sigma = 0.2;
	BSModel Model(S0, r, sigma);

	double T = 1.0/12.0, K = 100;
	int m = 20;
	ArthmAsianCall Option(T,K,m);

	long N = 30000;
	cout << "Asian Call Price = "
		<< Option.PriceByMC(Model, N) << endl;

	return 0;
}