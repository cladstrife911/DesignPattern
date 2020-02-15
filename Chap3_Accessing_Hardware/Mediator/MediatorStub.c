#include "GraspingManipulator.h"
#include "RotatingArmJoint.h"
#include "SlidingArmJoint.h"
#include "Action.h"

Action *Action_Create(void)
{
  //malloc for Action
  return 0;
}

int GraspingManipulator_setMaxForce(GraspingManipulator *me, int actionValue)
{
  return 42;
}

int GraspingManipulator_open(GraspingManipulator *me)
{
  return 42;
}

int GraspingManipulator_close(GraspingManipulator *me)
{
  return 42;
}

int RotatingArmJoint_rotate(RotatingArmJoint *me, int actionValue)
{
  return 42;
}

int RotatingArmJoint_zero(RotatingArmJoint *me)
{
  return 42;
}

int SlidingArmJoint_setLength(SlidingArmJoint *me, int actionValue)
{
  return 42;
}

int SlidingArmJoint_zero(SlidingArmJoint *me)
{
  return 42;
}
