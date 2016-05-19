#include <iostream>
#include <cmath>
#include <vector>

std::vector<double> nestedSum( const std::vector<double>& p, double z )
{
	std::vector<double> p_;
	const int psize = p.size();
	p_.push_back( p[psize-1] );
	for ( int i=0; i<psize; i++ )
		p_.push_back( p[psize-2-i] + (z - p[psize-1])*p_[i];

	return p_;
}

int main( int argc, char *argv[] )
{
	std::vector<double> p;
	for ( int i=0; i<10; i++ )
		p.push_back( i );

	nestedSum( p, 0.0 );

	return 0;
}
