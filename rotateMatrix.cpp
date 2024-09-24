#include <iostream>
#include <vector>
#include <random>

using namespace std;

random_device ran;
mt19937 gen(ran());
uniform_int_distribution<int> d{ 10, 99 };
using matrix = vector<vector<int>>;

class Matrix {
    matrix m;

public:
    Matrix()
    {
        cout << "Enter the size of your matrix: " << endl;
        size_t n;
        cin >> n;
        m.resize(n, vector<int>(n));

        fillMatrix();
    }

    inline matrix& getMatrix()
    {
        return m;
    }

    inline void setMatrix(const matrix& newMatrix) 
    {
        m = newMatrix;
    }

    void fillMatrix() {
        for (int i = 0; i < m.size(); i++) {
            for (int j = 0; j < m.size(); j++) {
                m[i][j] = d(gen);
            }
        }
    }

    void printMatrix() {
        for (const auto& row : m) {
            for (const auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }

    void transposeMatrix() {
        for (int i = 0; i < m.size(); i++) {
            for (int j = i + 1; j < m.size(); j++) {
                //swap(m[i][j], m[j][i]);
                int tmp = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = tmp;
            }
        }
    }
    void rotateMatrix() {
        transposeMatrix();
        for (int i = 0; i < m.size();i++) {
            for (int j = 0; j < m.size()/2;j++) 
            {
                int tmp = m[i][j];
                m[i][j] = m[i][m.size() - j - 1];
                m[i][m.size() - j - 1] = tmp;
            }
        }
        cout << "matrix before rotate:" << endl;
        printMatrix();
    }
};

int main() {
    Matrix m;
    m.printMatrix();
    m.rotateMatrix();
}
