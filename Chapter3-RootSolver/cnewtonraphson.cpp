#include "cnewtonraphson.h"
#include <cmath>

CNewtonRaphson::CNewtonRaphson()
    : initialvalue(0.0)
    , function(0)
    , dfunction(0)
{}

CNewtonRaphson::CNewtonRaphson( double value, double (*f)(double),
				double (*df)(double) )
    : initialvalue(value)
    , function(f)
    , dfunction(df)
{}

double CNewtonRaphson::getRoot( double error )
{
    typedef double (*namer)(double);
    namer f = function, df = dfunction;
    double root = initialvalue;
    while ( std::abs(f(root)) > error )
	root = root - f(root)/df(root);

    return root;
}

void CNewtonRaphson::setInitValue( double value )
{
    initialvalue = value;
}

void CNewtonRaphson::setFunction( double (*f)(double), double (*df)(double) )
{
    function = f;
    dfunction = df;
}
