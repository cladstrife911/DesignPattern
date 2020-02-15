#ifndef GRASPING_MANIPULATOR_H
#define GRASPING_MANIPULATOR_H

// typedef struct GraspingManipulator GraspingManipulator;

typedef struct GraspingManipulator GraspingManipulator;

struct GraspingManipulator
{
  GraspingManipulator *me;
  int actionValue;
};

int GraspingManipulator_setMaxForce(GraspingManipulator *me, int actionValue);
int GraspingManipulator_open(GraspingManipulator *me);
int GraspingManipulator_close(GraspingManipulator *me);

#endif /*GRASPING_MANIPULATOR_H*/
