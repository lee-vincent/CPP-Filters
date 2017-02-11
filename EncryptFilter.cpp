//
//  EncryptFilter.cpp
//  lab5
//
//  Created by Vincent Lee on 10/31/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "EncryptFilter.h"
#include <iostream>


EncryptFilter::EncryptFilter(int key) {
    this->key = key;
}

EncryptFilter::EncryptFilter() {
    std::cout << "Enter encryption key";
    std::cin >> key;
}



char EncryptFilter::transform(char ch) {
    int temp = ch + key;
    temp =  temp%26;
    return (char)temp;
}



void EncryptFilter::doFilter(std::ifstream &in, std::ofstream &out) {
    
    if(!in.is_open() || !out.is_open()) {
        std::cout << "Infile or Outfile is not open" << std::endl;
        return;
    }
    
    char ch;
    
    while(in.get(ch)) {
        out.put(EncryptFilter::transform(ch));
    }
    
    in.close();
    out.close();
    
    
    
    
}