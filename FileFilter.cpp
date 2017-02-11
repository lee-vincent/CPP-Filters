//
//  FileFilter.cpp
//  lab5
//
//  Created by Vincent Lee on 10/31/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "FileFilter.h"
#include <iostream>


//void FileFilter::doFilter(std::ifstream &in, std::ofstream &out) {
//    
//    if(!in.is_open() || !out.is_open()) {
//        std::cout << "Infile or Outfile is not open" << std::endl;
//        return;
//    }
//    
//    char ch;
//    
//    while(in.get(ch)) {
//        out.put(FileFilter::transform(ch));
//    }
//
//    in.close();
//    out.close();
//
//
//
//
//}