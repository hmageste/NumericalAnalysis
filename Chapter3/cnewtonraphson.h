#ifndef cnewtonraphson_h
#define cnewtonraphson_h

class CNewtonRaphson
{
public:
    CNewtonRaphson();
    CNewtonRaphson(double,double (*)(double),double (*)(double));

    void   setInitValue(double);
    void   setFunction(double (*)(double),double (*)(double));

    double getRoot(double);
protected:
    double initialvalue;

    double (*function)(double);
    double (*dfunction)(double); //derivate of function
};

#endif
