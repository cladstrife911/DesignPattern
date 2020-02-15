#ifndef ROTATING_ARM_JOINT_H
#define ROTATING_ARM_JOINT_H

typedef struct RotatingArmJoint RotatingArmJoint;
struct RotatingArmJoint
{
  RotatingArmJoint *me;
  int actionValue;
};

int RotatingArmJoint_rotate(RotatingArmJoint *me, int actionValue);
int RotatingArmJoint_zero(RotatingArmJoint *me);

#endif /*ROTATING_ARM_JOINT_H*/
