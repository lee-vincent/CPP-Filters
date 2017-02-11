//
//  EncryptFilter.hpp
//  lab5
//
//  Created by Vincent Lee on 10/31/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef EncryptFilter_h
#define EncryptFilter_h

#include <stdio.h>
#include "FileFilter.h"


class EncryptFilter: public FileFilter{
    
private:
    int key;
    
public:
    EncryptFilter();
    EncryptFilter(int key);
    virtual char transform(char ch);
    virtual void doFilter(std::ifstream &in, std::ofstream &out);
};

#endif /* EncryptFilter_h */
