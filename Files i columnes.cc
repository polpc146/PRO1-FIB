#include <iostream>
#include <vector>
using namespace std;
 
typedef vector< vector<int> >Matriu;
 
void llegeix_matriu(Matriu& m) {
  int f = m.size();
  int c = m[0].size();
  for (int i = 0; i < f; ++i) {
    for (int j = 0; j < c; ++j) cin >> m[i][j];
  }
}
 
int main() {
  int f, c;
  cin >> f >> c;
  Matriu mat(f,vector<int>(c));
  llegeix_matriu(mat);
  string consulta;
  while (cin >> consulta) {
    int n;
    if (consulta == "fila") {
      cin >> n;
      cout << "fila " << n << ":";
      for (int i = 0; i < c; ++i) cout << " " << mat[n-1][i];
      cout << endl;
    }
    else if (consulta == "columna") {
      cin >> n;
      cout << "columna " << n << ":";
      for (int i = 0; i < f; ++i) cout << " " << mat[i][n-1];
      cout << endl;
    }
    else {
      int m;
      cin >> n >> m;
      cout << "element " << n << " " << m << ": " << mat[n-1][m-1];
      cout << endl;
    }
  }
}
