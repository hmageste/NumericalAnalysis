#include<iostream>
#include<cmath>
#include<cstdlib>

int factorial( int n )
{
    return (n == 1 || n == 0) ? 1 : factorial(n-1)*n;
}

int main( int argc, char* argv[] )
{
    int n = std::atoi(argv[2]);
    double exp_x, x = std::atof(argv[1]);
    for ( int i = 0; i < n; i++ )
	exp_x += pow( x, i )/factorial(i);

    std::cout << exp_x << std::endl;
    return 0;
}
