/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector.h
 * Author: tgergo1
 *
 * Created on April 10, 2018, 10:32 PM
 */

#ifndef VECTOR_H
#define VECTOR_H

struct vector{
    unsigned int dimension;
    double* coordinates;
    
    vector(auto d):dimension(d){
        coordinates = new auto[d];
    }
};

#endif /* VECTOR_H */

