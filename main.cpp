#include <armadillo>
#include <iostream>
#include "Data.h"

using namespace std;
using namespace arma;

int main()
{
	vector<double> xin10 = { 0.0174603,0.422222,1.1,1.69365,2.35873,3.0746,3.38889,3.87619,4.40159,4 };
	vector<double> cin7 = { 15, 21, 0.403, 2, 0.04, 0.04, 1.2 };
	int choice = 1;
	cout << sim_model(xin10, cin7,choice) << endl;
}