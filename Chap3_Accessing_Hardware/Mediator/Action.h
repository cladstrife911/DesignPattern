#ifndef ACTION_H
#define ACTION_H

typedef struct Action Action;

struct Action
{
  int rotatingArmJoint1;
  int rotatingArmJoint2;
  int rotatingArmJoint3;
  int rotatingArmJoint4;
  int slidingArmJoint1;
  int slidingArmJoint2;
  int manipulatorForce;
  int manipulatorOpen;
};

Action *Action_Create(void);

#endif /*ACTION_H*/
