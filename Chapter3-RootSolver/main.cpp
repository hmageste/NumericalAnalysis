#include <iostream>
#include <cmath>
#include "cbissection.h"
#include "cregulafalsi.h"
#include "cnewtonraphson.h"

using namespace std;

double f( double x )
{
    return x-1.6;
}

double f1( double x )
{
    return 4*sin(x)-exp(x);
}

double df1( double x )
{
    return 4*cos(x)-exp(x);
}

int main( int argc, char* argv[] )
{
    double error = 1e-6;
    //CBissection teste( 1.0, 3.0, f );
    //CRegulaFalsi teste( 0.0, 3.1416/2.0, f1 );
    CNewtonRaphson teste( 0.0, f1, df1 );
    std::cout << teste.getRoot( error ) << std::endl;

    return 0;
}
