#include "main.h"

extern "C"
{
	EXPORT btGeneric6DofSpringConstraint* btGeneric6DofSpringConstraint_new(btRigidBody* rbA, btRigidBody* rbB, btScalar* frameInA, btScalar* frameInB, bool useLinearReferenceFrameA);
	EXPORT btGeneric6DofSpringConstraint* btGeneric6DofSpringConstraint_new2(btRigidBody* rbB, btScalar* frameInB, bool useLinearReferenceFrameB);
	EXPORT void btGeneric6DofSpringConstraint_enableSpring(btGeneric6DofSpringConstraint* obj, int index, bool onOff);
	EXPORT void btGeneric6DofSpringConstraint_setDamping(btGeneric6DofSpringConstraint* obj, int index, btScalar damping);
	EXPORT void btGeneric6DofSpringConstraint_setEquilibriumPoint(btGeneric6DofSpringConstraint* obj);
	EXPORT void btGeneric6DofSpringConstraint_setEquilibriumPoint2(btGeneric6DofSpringConstraint* obj, int index);
	EXPORT void btGeneric6DofSpringConstraint_setEquilibriumPoint3(btGeneric6DofSpringConstraint* obj, int index, btScalar val);
	EXPORT void btGeneric6DofSpringConstraint_setStiffness(btGeneric6DofSpringConstraint* obj, int index, btScalar stiffness);
}
