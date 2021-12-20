#include <iostream>
#include <vector>
using namespace std;

class Matrix{
private:
  double alpha;
  double eps;

public:
  void set_params(double a, double e);
  vector<double> iterations(vector<double> x_0, vector<vector<double>> A, vector<double> b);
};
