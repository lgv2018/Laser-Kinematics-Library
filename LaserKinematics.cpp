/**********************************************************************************************
 * Arduino Laser Kinematics- Version 1.0
 * by William Bailes <williambailes@gmail.com> http://tinkersprojects.com/
 *
 * This Library is licensed under a GPLv3 License
 * 
 * made with infomation from the following documents
 * - http://www.deltatau.com/Common/technotes/Laser%20Mirror%20Kinematics.pdf
 **********************************************************************************************/

#include "LaserKinematics.h"

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include <math.h>

/******************* SETUP *******************/

LaserKinematics::LaserKinematics(double _Length1,double _Length2)
{
  Length1 = _Length1;
  Length2 = _Length2;
}





int LaserKinematics::forward() 
{
  return forward(a, b);
}

int LaserKinematics::forward(double thetaA, double thetaB) 
{
  y = Length2 * tan(2*thetaB);
  x = (Length1 + sqrt(Length2 * Length2 + y * y)) * tan(2 * thetaA)

  return no_error;
}





int LaserKinematics::inverse() 
{
  inverse(x, y);
}

int LaserKinematics::inverse(double x0, double y0) 
{
  a = 0.5 * atan2(y0, Length2);
  b = 0.5 * atan2(x0, Length1 + sqrt(Length2 * Length2 + y * y))

  return no_error;
}
