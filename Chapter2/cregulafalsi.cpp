#include "cregulafalsi.h"
#include "cmath"

using namespace std;

CRegulaFalsi::CRegulaFalsi()
    : lsvalue(0.0)
    , rsvalue(0.0)
    , function(0)
{}

CRegulaFalsi::CRegulaFalsi( double a, double b, double (*f)(double) )
    : lsvalue(a)
    , rsvalue(b)
    , function(f)
{}

double CRegulaFalsi::getRoot( double error )
{
    double a = lsvalue, b = rsvalue;
    double fa = function(a), fb = function(b);
    double root = a, froot = fa;
    while ( std::abs(a-b) > error && froot != 0.0 )
    {
	root = (a*fb-b*fa)/(fb-fa);
	froot = function( root );
	if ( froot*fb < 0 )
	{
	    a = root;
	    fa = froot;
	}
	else
	{
	    b = root;
	    fb = froot;
	}
    }

    return root;
}

void CRegulaFalsi::setSValues( double a, double b )
{
    lsvalue = a;
    rsvalue = b;
}

void CRegulaFalsi::setFunction( double (*f)(double) )
{
    function = f;
}
