#ifndef cbissection_h
#define cbissection_h

class CBissection
{
public:
    CBissection();
    CBissection(double,double,double (*)(double));

    void   setSValues(double,double);
    void   setFunction(double (*)(double));

    double getRoot(double);
protected:
    double lsvalue;
    double rsvalue;

    double (*function)(double);
};

#endif
