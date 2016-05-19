#ifndef cregulafalsi_h
#define cregulafalsi_h

class CRegulaFalsi
{
public:
    CRegulaFalsi();
    CRegulaFalsi(double,double,double (*)(double));

    void   setSValues(double,double);
    void   setFunction(double (*)(double));

    double getRoot(double);
protected:
    double lsvalue;
    double rsvalue;

    double (*function)(double);
};

#endif
