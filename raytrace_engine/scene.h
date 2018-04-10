/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   scene.h
 * Author: tgergo1
 *
 * Created on April 10, 2018, 10:18 PM
 */

#ifndef SCENE_H
#define SCENE_H

#include "object.h"

#include <vector>

class scene{
    std::vector<object> solids;
    std::vector<light> lights;
    
public:
    scene(){}
};

#endif /* SCENE_H */

