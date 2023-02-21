#include <crtdbg.h>
#include <iostream>

struct Matrix {
    int rows;
    int cols;
    int** data;
};

void MakeMatrix(int rows, int cols, Matrix* u) {
    u->data = new int* [rows];
    for (int i = 0; i < rows; i++) {
        u->data[i] = new int[cols];
    }
    u->rows = rows;
    u->cols = cols;
}

void FillMatrix(Matrix& u) {
    std::cout << "Enter values for " << u.rows << " x " << u.cols << " matrix" << std::endl;
    for (int i = 0; i < u.rows; i++) {
        for (int j = 0; j < u.cols; j++) {
            std::cout << "(" << i << " , " << j << ") value: " << std::endl;
            std::cin >> u.data[i][j];
        }
    }
}

bool MultiplyMatrices(Matrix& u, Matrix& v, Matrix* w) {
    if (u.cols != v.rows) {
        std::cout << "Invalid matrix multiplication...";
        return false;
    }
    
    MakeMatrix(u.rows, v.cols, w);
    for (int i = 0; i < u.rows; i++) {
        for (int j = 0; j < v.cols; j++) {
            int ans = 0;
            for (int k = 0; k < u.cols; k++) {
                ans += u.data[i][k] * v.data[k][j];
            }
            w->data[i][j] = ans;
        }
    }
    return true;
}

void PrintMatrix(Matrix& u) {
    for (int i = 0; i < u.rows; i++) {
        for (int j = 0; j < u.cols; j++) {
            std::cout << u.data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void FreeMatrix(Matrix& u) {
    for (int i = 0; i < u.rows; i++) {
        delete[] u.data[i];
        u.data[i] = nullptr;
    }
    delete[] u.data;
    u.data = nullptr;
}

int main() {
    Matrix u{ 0, 0, nullptr }, v{ 0, 0, nullptr };
    Matrix w{ 0, 0 , nullptr };
    MakeMatrix(/*rows*/2, /*cols*/2, &u);
    FillMatrix(u);
    MakeMatrix(2, 1, &v);
    FillMatrix(v);
    bool succeeded = MultiplyMatrices(u, v, &w);
    if (succeeded) {
        PrintMatrix(u);
        PrintMatrix(v);
        for (size_t i = 0; i < w.rows; ++i) {
            for (size_t j = 0; j < w.cols; ++j) {
                std::cout << w.data[i][j] << " " << std::flush;
            }
            std::cout << std::endl;
        }
    }
    FreeMatrix(u);
    FreeMatrix(v);
    FreeMatrix(w);
    _CrtDumpMemoryLeaks(); // should report no leakages
}
