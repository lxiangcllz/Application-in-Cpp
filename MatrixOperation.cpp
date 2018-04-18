//矩阵加法、乘法、以及方阵的乘法

#include <iostream>

using namespace std;

template<class T>
void matrixAdd(T **a, T **b, T **c, int numberOfRows, int numberOfColumns) {
	for(int i = 0; i < numberOfRows; i++) {
		for(int j = 0; j < numberOfColumns; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

template<class T>
void squareMatrixMultiply(T **a, T **b, T **c, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			T sum = 0;
			for(int k = 0; k < n; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
}

template<class T>
void matrixMultiply(T **a, T **b, T **c, int m , int n, int p) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < p; j++) {
			T sum = 0;
			for(int k = 0; k < n; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
}

int main() {
	int a[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int b[][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	int c[3][3] = {0};

	int m = 3, n = 3;

	cout << "The matrix a is : " << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "The matrix b is : " << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << b[i][j] << '\t';
		}
		cout << endl;
	}

	matrixAdd((int **)a, (int **)b, (int **)c, m, n);

	cout << "The matrix c is : " << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << c[i][j] << '\t';
		}
		cout << endl;
	}

	return 0;
}
