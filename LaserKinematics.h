
#ifndef LaserKinematics_h
#define LaserKinematics_h

#define non_existing_povar_error -2
#define no_error 1

class LaserKinematics
{
    public:
        // SETUP 
        LaserKinematics(double _Length1,double _Length2);
        
        int forward();
        int forward(double thetaA, double thetaB);
        int inverse();
        int inverse(double x0, double y0);

        double x;
        double y;

        double a;
        double b;
        
    private:
        double Length1;
        double Length2;
       
};

#endif 



