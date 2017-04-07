#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

using namespace std;

template <typename T>
class Matrix
{
    private:
        T ** mat;
        int row;
        int col;
        void init();
    public:
        Matrix<T>(int r, int c){
            row = r;
            col = c;
            mat = new T *[row];
            for(int i = 0 ; i < row ; i++){
                mat[i] = new T [col];
            }
            this->init();
        };
        virtual ~Matrix(){
            for(int i = 0 ; i < row ; i++){
                delete[] mat[i];
            }
            delete[] mat;
        };
        int getRow() const;
        int getCol() const;
        T getAt(int, int) const;
        void setAt(int, int, T);
        void trasposeMatrix();
        Matrix<T> operator+ (const Matrix<T>&);
        Matrix<T> operator- (const Matrix<T>&);
        Matrix<T> operator* (const Matrix<T>&);
        friend ostream& operator<< (ostream& out, Matrix<T> M){
            out << "The Matrix Value: " << endl;
            for(int i = 0 ; i < M.getRow() ; i++){
                for(int j = 0 ; j < M.getCol() ; j++){
                    if(M.getAt(i, j) > 99){
                        out << M.getAt(i , j) << " ";
                    }
                    else if(M.getAt(i , j) > 9){
                        out << " " << M.getAt(i , j) << " ";
                    }
                    else{
                        out << "  " << M.getAt(i , j) << " ";
                    }
                }
                out << endl;
            }
            return out;
        };
        friend istream& operator>> (istream& in, Matrix<T>& M){
            for(int i = 0 ; i < M.getRow() ; i++){
                for(int j = 0 ; j < M.getCol() ; j++){
                    T temp;
                    in >> temp;
                    M.setAt(i , j , temp);
                }
            }
            return in;
        };

};



template <typename T>
void Matrix<T>::init(){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++)
            mat[i][j] = 0;
    }
}

template <typename T>
int Matrix<T>::getRow() const{
    return row;
}

template <typename T>
int Matrix<T>::getCol() const{
    return col;
}

template <typename T>
void Matrix<T>::setAt(int i , int j , T value){
    this->mat[i][j] = value;
}

template <typename T>
T Matrix<T>::getAt(int i, int j) const{
    return mat[i][j];
}

template <typename T>
void Matrix<T>::trasposeMatrix(){
    T** trans;
    trans = new T *[col];
    for(int i = 0 ; i < col ; i++){
        trans[i] = new T[row];
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            trans[j][i] = mat[i][j];
        }
    }

    for(int i = 0 ; i < row ; i++){
        delete[] mat[i];
    }
    delete[] mat;

    row = row ^ col;
    col = row ^ col;
    row = row ^ col;

    mat = new T* [row];
    for(int i = 0 ; i < row ; i++){
        mat[i] = new T[col];
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            mat[i][j] = trans[i][j];
        }
    }

    for(int i = 0 ; i < row ; i++){
        delete[] trans[i];
    }
    delete[] trans;
}

template <typename T>
Matrix<T> Matrix<T>::operator+ (const Matrix<T>& M){
    Matrix res(row , col);
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            T value = mat[i][j] + M.getAt(i , j);
            res.setAt(i , j , value);
        }
    }
    return res;
}

template <typename T>
Matrix<T> Matrix<T>::operator- (const Matrix<T>& M){
    Matrix res(row , col);
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            T value;
            value = mat[i][j] - M.getAt(i , j);
            res.setAt(i , j , value);
        }
    }
    return res;
}

template <typename T>
Matrix<T> Matrix<T>::operator* (const Matrix<T>& M){
    Matrix res(row , M.getCol());
    for(int i = 0 ; i < row ; i++){
        for(int k = 0 ; k < M.getCol() ; k++){
            T value = 0;
            for(int j = 0 ; j < col ; j++){
                value += mat[i][j] * M.getAt(j , k);
            }
            res.setAt(i , k , value);
        }
    }
    return res;
}

#endif // MATRIX_H
