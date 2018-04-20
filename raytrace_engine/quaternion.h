/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quaternion.h
 * Author: tgergo1
 *
 * Created on April 10, 2018, 10:34 PM
 */

#ifndef QUATERNION_H
#define QUATERNION_H

#include "vector.h"

class quaternion{
    vector v;
public:
    quaternion(){
        v = new vector(4);
    }
};

#endif /* QUATERNION_H */

