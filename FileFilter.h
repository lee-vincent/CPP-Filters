//
//  FileFilter.hpp
//  lab5
//
//  Created by Vincent Lee on 10/31/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef FileFilter_h
#define FileFilter_h

#include <stdio.h>
#include <iostream>
#include <fstream>

class FileFilter {

public:
    
    virtual char transform(char ch) = 0;
    virtual void doFilter(std::ifstream &in, std::ofstream &out) = 0;

};

#endif /* FileFilter_h */
