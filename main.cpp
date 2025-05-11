//
//  main.cpp
//  Quadratic
//
//  Created by James McDonagh on 13/08/2017.
//  Copyright © 2017 James McDonagh. All rights reserved.
//  MIT Licensed
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

float discrim(float a, float b, float c){
    float d;
    
    d = (b * b) - (4 * a * c);
    
    return d;
}

int main(int argc, const char * argv[]) {
    float a, b, c;
    float d, dsqrt; // discriminant and sqare root of the discriminant
    float r1, r2; // roots

    
    std::cout << "Please enter the a value of your quadratic function" << std::endl;
    std::cin >> a;
    
    std::cout << "Please enter the b value of your quadratic function" << std::endl;
    std::cin >> b;
    
    std::cout << "Pldease enter the c value of your quadratic function" << std::endl;
    std::cin >> c;
    
    std::cout << "-" << b << "+/- sqrt((" << b << "^2 - 4x" << a << "x" << c << ")/2x" << a << ")" << std::endl;
    
    d = discrim(a, b,c);
    
    std::cout << "Discriminant is = " << d << std::endl;
    
    if (d > 0)
    {
        dsqrt = sqrt(d);
        r1 = -b + (dsqrt / 2 * a);
        r2 = -b - (dsqrt / 2 * a);
        std::cout << "Quaratic function has 2 real roots: " << r1 << " and " << r2 << std::endl;
    }
    else if (d < 0)
    {
        std::cout << "There are no real roots as solutions to your quadratic equation" << std::endl;
    }
    else if (d == 0)
    {
        dsqrt = sqrt(d);
        r1 = -b + (dsqrt / 2 * a);
        std::cout << "Quadration function has 1 real root: " << r1 << std::endl;
    }
    else
    {
        std::cout << "ERROR - discriminant is not recognised as a useable number" << std::endl;
    }
    
    return 0;
}
