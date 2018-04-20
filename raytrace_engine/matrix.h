/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   matrix.h
 * Author: tgergo1
 *
 * Created on April 10, 2018, 10:32 PM
 */

#ifndef matrix_H
#define matrix_H

class matrix{
    unsigned int rows, cols;
    double **p;
public:
    matrix  (auto x, auto y);
    ~matrix ();
    matrix  (const matrix&);
    matrix& operator=           (const matrix&);
    inline double& operator()   (int x, int y) { return p[x][y]; }
    matrix& operator+=          (const matrix&);
    matrix& operator-=          (const matrix&);
    matrix& operator*=          (const matrix&);
    matrix& operator*=          (double);
    matrix& operator/=          (double);
    matrix  operator^           (int);

    friend std::ostream& operator<<(std::ostream&, const matrix&);
    friend std::istream& operator>>(std::istream&, matrix&);
    
    matrix transpose();
    void rowSwap(int, int);
    
    static matrix identity(int);
    static matrix solve(matrix, matrix);

    static double dotProduct(matrix, matrix);

    matrix gaussian();
    matrix rowReduce();
    matrix inverse();
};

#endif /* matrix_H */

