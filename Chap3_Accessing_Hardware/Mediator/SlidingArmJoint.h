#ifndef SLIDING_ARM_JOINT_H
#define SLIDING_ARM_JOINT_H

typedef struct SlidingArmJoint SlidingArmJoint;
struct SlidingArmJoint
{
  SlidingArmJoint *me;
  int actionValue;
};

int SlidingArmJoint_setLength(SlidingArmJoint *me, int actionValue);
int SlidingArmJoint_zero(SlidingArmJoint *me);

#endif /*SLIDING_ARM_JOINT_H*/
