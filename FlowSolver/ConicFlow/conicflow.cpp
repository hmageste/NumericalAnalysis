#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main( int argc, char* argv[] )
{
	stringstream ss;
	for ( int i=1; i<argc; i++ )
		ss << argv[i] << " ";

	int n;
	float u0, p0, T, L;
	ss >> u0 >> T >> n >> L;

	vector<float> velocity(n+1);

	velocity[0] = u0;
	float dx = L/n;
	float v_prev;
	for ( int i=1; i<=n; i++ )
	{
		v_prev = velocity[i-1];
		velocity[i] = v_prev - sqrt( pow(v_prev,2.0f) - v_prev + 2.0*T*dx );
	}

	for ( int i=0; i<velocity.size(); i++ )
		cout << velocity[i] << " ";
	cout << endl;

	return 0;
}
