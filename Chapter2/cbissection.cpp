#include "cbissection.h"
#include "cmath"

CBissection::CBissection()
    : lsvalue(0.0)
    , rsvalue(0.0)
    , function(0)
{}

CBissection::CBissection( double a, double b, double (*f)(double) )
    : lsvalue(a)
    , rsvalue(b)
    , function(f)
{}

double CBissection::getRoot( double error )
{
    double a = lsvalue, b = rsvalue;
    double root = (a+b)/2.0;
    while ( std::abs(a-b) > error )
    {
	if ( function(root)*function(b) <= 0 )
	    a = root;
	else
	    b = root;
	root = (a+b)/2.0;
    }

    return root;
}

void CBissection::setSValues( double a, double b )
{
    lsvalue = a;
    rsvalue = b;
}

void CBissection::setFunction( double (*f)(double) )
{
    function = f;
}
