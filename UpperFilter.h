//
//  UpperFilter.hpp
//  lab5
//
//  Created by Vincent Lee on 10/31/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef UpperFilter_h
#define UpperFilter_h

#include <stdio.h>
#include "FileFilter.h"


class UpperFilter: public FileFilter{
    
public:
    virtual char transform(char ch);
    virtual void doFilter(std::ifstream &in, std::ofstream &out);
};

#endif /* UpperFilter_h */
