//
//  SimpleFilter.hpp
//  lab5
//
//  Created by Vincent Lee on 10/31/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef SimpleFilter_h
#define SimpleFilter_h

#include <stdio.h>
#include "FileFilter.h"


class SimpleFiler: public FileFilter{

public:
    virtual char transform(char ch);
    virtual void doFilter(std::ifstream &in, std::ofstream &out);
};

#endif /* SimpleFilter_h */
