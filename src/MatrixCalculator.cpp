#include "MatrixCalculator.h"

MatrixCalculator::MatrixCalculator()
{
    bool flag = true;
    do{
        int choice = 0;
        flag = false;
        cout << "Welcome to Eslam Ebrahim Matrix Calculator" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1- Perform Matrix Addition" << endl;
        cout << "2- Perform Matrix Subtraction" << endl;
        cout << "3- Perform Matrix Multiplication" << endl;
        cout << "4- Matrix Transpose" << endl;
        cout << "0- Exit" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                Add();
                break;
            case 2:
                Sub();
                break;
            case 3:
                Mul();
                break;
            case 4:
                Trans();
                break;
            case 0:
               cout << endl << "Thanks for using my Matrix Calculator!" << endl ;
                break;
            default:
                cout << "error in entered number, please reenter" << endl;
                flag = true;
                break;
        }
    }while(flag);
}

MatrixCalculator::~MatrixCalculator()
{
    //dtor
}

void MatrixCalculator::Add(){
    bool flag = true;
    int r1 , r2 , c1 , c2;
    do{
        cout << "Enter first Matrix parameters (row then column): " <<endl;
        cin >> r1 >> c1;
        cout << "Enter second Matrix parameters (row then column): " << endl;
        cin >> r2 >> c2;
        if(r1 == r2 && c1 == c2)
            flag = false;
        else
            cout << "Entered Parameters are incorrect, please reenter" << endl;
    }while(flag);
    flag = true;
    do{
        int choice = 0;
        cout << "enter data type" << endl;
        cout << "enter (1) for integer" << endl;
        cout << "enter (2) for float" << endl;
        cout << "enter (3) for double" << endl;
        cin >> choice;
        if(choice == 1){
            Matrix<int> M1(r1,c1);
            Matrix<int> M2(r2,c2);
            Matrix<int> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 + M2;
            cout << "addition result: " << endl;
            cout << res;
            flag = false;
        }
        else if(choice == 2){
            Matrix<float> M1(r1,c1);
            Matrix<float> M2(r2,c2);
            Matrix<float> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 + M2;
            cout << "addition result: " << endl;
            cout << res;
            flag = false;
        }
        else if(choice == 3){
            Matrix<double> M1(r1,c1);
            Matrix<double> M2(r2,c2);
            Matrix<double> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 + M2;
            cout << "addition result: " << endl;
            cout << res;
            flag = false;
        }
        else{
            cout << "input is not valid, please reenter" << endl;
        }
    }while(flag);
}

void MatrixCalculator::Sub(){
    bool flag = true;
    int r1 , r2 , c1 , c2;
    do{
        cout << "Enter first Matrix parameters (row then column): " <<endl;
        cin >> r1 >> c1;
        cout << "Enter second Matrix parameters (row then column): " << endl;
        cin >> r2 >> c2;
        if(r1 == r2 && c1 == c2)
            flag = false;
        else
            cout << "Entered Parameters are incorrect, please reenter" << endl;
    }while(flag);
    flag = true;
    do{
        int choice = 0;
        cout << "enter data type" << endl;
        cout << "enter (1) for integer" << endl;
        cout << "enter (2) for float" << endl;
        cout << "enter (3) for double" << endl;
        cin >> choice;
        if(choice == 1){
            Matrix<int> M1(r1,c1);
            Matrix<int> M2(r2,c2);
            Matrix<int> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 - M2;
            cout << "subtraction result: " << endl;
            cout << res;
            flag = false;
        }
        else if(choice == 2){
            Matrix<float> M1(r1,c1);
            Matrix<float> M2(r2,c2);
            Matrix<float> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 - M2;
            cout << "subtraction result: " << endl;
            cout << res;
            flag = false;
        }
        else if(choice == 3){
            Matrix<double> M1(r1,c1);
            Matrix<double> M2(r2,c2);
            Matrix<double> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 - M2;
            cout << "subtraction result: " << endl;
            cout << res;
            flag = false;
        }
        else{
            cout << "input is not valid, please reenter" << endl;
        }
    }while(flag);
}

void MatrixCalculator::Mul(){
    bool flag = true;
    int r1 , r2 , c1 , c2;
    do{
        cout << "Enter first Matrix parameters (row then column): " <<endl;
        cin >> r1 >> c1;
        cout << "Enter second Matrix parameters (row then column): " << endl;
        cin >> r2 >> c2;
        if(c1 == r2)
            flag = false;
        else
            cout << "Entered Parameters are incorrect, please reenter" << endl;
    }while(flag);
    flag = true;
    do{
        int choice = 0;
        cout << "enter data type" << endl;
        cout << "enter (1) for integer" << endl;
        cout << "enter (2) for float" << endl;
        cout << "enter (3) for double" << endl;
        cin >> choice;
        if(choice == 1){
            Matrix<int> M1(r1,c1);
            Matrix<int> M2(r2,c2);
            Matrix<int> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 * M2;
            cout << "multiplication result: " << endl;
            cout << res;
            flag = false;
        }
        else if(choice == 2){
            Matrix<float> M1(r1,c1);
            Matrix<float> M2(r2,c2);
            Matrix<float> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 * M2;
            cout << "multiplication result: " << endl;
            cout << res;
            flag = false;
        }
        else if(choice == 3){
            Matrix<double> M1(r1,c1);
            Matrix<double> M2(r2,c2);
            Matrix<double> res(r1,c1);
            cout << "enter first Matrix: " << endl;
            cin >> M1;
            cout << "enter second Matrix: " << endl;
            cin >> M2;
            res = M1 * M2;
            cout << "multiplication result: " << endl;
            cout << res;
            flag = false;
        }
        else{
            cout << "input is not valid, please reenter" << endl;
        }
    }while(flag);
}

void MatrixCalculator::Trans(){
    bool flag = true;
    int r1, c1;
    cout << "Enter Matrix parameters (row then column): " << endl;
    cin >> r1 >> c1;
    do{
        int choice = 0;
        cout << "enter data type" << endl;
        cout << "enter (1) for integer" << endl;
        cout << "enter (2) for float" << endl;
        cout << "enter (3) for double" << endl;
        cin >> choice;
        if(choice == 1){
            Matrix<int> M1(r1,c1);
            cout << "enter Matrix: " << endl;
            cin >> M1;
            M1.trasposeMatrix();
            cout << "Transpose is: " << endl;
            cout << M1;
            flag = false;
        }
        else if(choice == 2){
            Matrix<double> M1(r1,c1);
            cout << "enter Matrix: " << endl;
            cin >> M1;
            M1.trasposeMatrix();
            cout << "Transpose is: " << endl;
            cout << M1;
            flag = false;
        }
        else if(choice == 3){
            Matrix<int> M1(r1,c1);
            cout << "enter Matrix: " << endl;
            cin >> M1;
            M1.trasposeMatrix();
            cout << "Transpose is: " << endl;
            cout << M1;
            flag = false;
        }
        else{
            cout << "input is not valid, please reenter" << endl;
        }
    }while(flag);
}

