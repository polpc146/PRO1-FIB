#include <iostream>
#include <vector>

using namespace std;

 int avalua(const vector<int>& p, int x) {
     double eval=0;
     int degree = p.size() - 1;
     for (int i = degree; i>=0; --i) {
         eval = eval*x + p[i];
    }
    return eval;
}
