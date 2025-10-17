#include <iostream>
#include <stdexcept>

template <typename T, std::size_t N, std::size_t M>
class Matrix {
private:
    T mat[N][M];

public:

    void set(int row, int col, T value) {
        if (row >= 0 && row < N && col >= 0 && col < M) {
            mat[row][col] = value;
        } else {
            std::cout << "Index out of bounds!" << std::endl;
        }
    }


    T get(int row, int col) const {
        if (row >= 0 && row < N && col >= 0 && col < M) {
            return mat[row][col];
        } else {
            std::cout << "Index out of bounds!" << std::endl;
            return T(); 
        }
    }

    
    void print() const {
        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < M; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }


    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < M; ++j) {
                result.mat[i][j] = this->mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
};

int main() {

    Matrix<int, 2, 3> mat1;
    mat1.set(0, 0, 1);
    mat1.set(0, 1, 2);
    mat1.set(0, 2, 3);
    mat1.set(1, 0, 4);
    mat1.set(1, 1, 5);
    mat1.set(1, 2, 6);

    std::cout << "Matrix 1 (int):" << std::endl;
    mat1.print();


    Matrix<double, 2, 3> mat2;
    mat2.set(0, 0, 1.1);
    mat2.set(0, 1, 2.2);
    mat2.set(0, 2, 3.3);
    mat2.set(1, 0, 4.4);
    mat2.set(1, 1, 5.5);
    mat2.set(1, 2, 6.6);

    std::cout << "\nMatrix 2 (double):" << std::endl;
    mat2.print();


    Matrix<int, 2, 3> mat3 = mat1 + mat1;
    std::cout << "\nMatrix 1 + Matrix 1 (int):" << std::endl;
    mat3.print();


    Matrix<std::string, 2, 2> mat4;
    mat4.set(0, 0, "Hello");
    mat4.set(0, 1, "World");
    mat4.set(1, 0, "Foo");
    mat4.set(1, 1, "Bar");

    std::cout << "\nMatrix 4 (std::string):" << std::endl;
    mat4.print();

    return 0;
}
