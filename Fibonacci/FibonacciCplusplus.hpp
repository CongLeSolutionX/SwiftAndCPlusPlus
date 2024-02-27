//
//  FibonacciCplusplus.hpp
//  Fibonacci
//
//  Created by Cong Le on 2/18/24.
//

//#ifndef FibonacciCplusplus_hpp
//#define FibonacciCplusplus_hpp
//
//#include <stdio.h>
//
//#endif /* FibonacciCplusplus_hpp */

#pragma once

class FibonacciCalculatorCplusplus {
public:
    FibonacciCalculatorCplusplus(bool printInvocation);
    double fibonacci(double value) const;
private:
    bool printInvocation;
};
