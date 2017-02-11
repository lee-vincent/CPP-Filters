//
//  main.cpp
//  lab5
//
//  Created by Vincent Lee on 10/31/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "FileFilter.h"
#include "SimpleFilter.h"
#include "UpperFilter.h"
#include "EncryptFilter.h"

int main(int argc, const char * argv[]) {
    
    std::ifstream inFile;
    std::ofstream outFile;
    
    inFile.open("SampleText.txt");
    outFile.open("EncryptedFile.txt");
    
    SimpleFilter sf;
    
    sf.doFilter(inFile, outFile);
    

    

    return 0;
}
