#include "main.h"

extern "C"
{
	EXPORT btConvexConvexAlgorithm_CreateFunc* btConvexConvexAlgorithm_CreateFunc_new(btVoronoiSimplexSolver* simplexSolver, btConvexPenetrationDepthSolver* pdSolver);
	EXPORT int btConvexConvexAlgorithm_CreateFunc_getMinimumPointsPerturbationThreshold(btConvexConvexAlgorithm_CreateFunc* obj);
	EXPORT int btConvexConvexAlgorithm_CreateFunc_getNumPerturbationIterations(btConvexConvexAlgorithm_CreateFunc* obj);
	EXPORT btConvexPenetrationDepthSolver* btConvexConvexAlgorithm_CreateFunc_getPdSolver(btConvexConvexAlgorithm_CreateFunc* obj);
	EXPORT btVoronoiSimplexSolver* btConvexConvexAlgorithm_CreateFunc_getSimplexSolver(btConvexConvexAlgorithm_CreateFunc* obj);
	EXPORT void btConvexConvexAlgorithm_CreateFunc_setMinimumPointsPerturbationThreshold(btConvexConvexAlgorithm_CreateFunc* obj, int value);
	EXPORT void btConvexConvexAlgorithm_CreateFunc_setNumPerturbationIterations(btConvexConvexAlgorithm_CreateFunc* obj, int value);
	EXPORT void btConvexConvexAlgorithm_CreateFunc_setPdSolver(btConvexConvexAlgorithm_CreateFunc* obj, btConvexPenetrationDepthSolver* value);
	EXPORT void btConvexConvexAlgorithm_CreateFunc_setSimplexSolver(btConvexConvexAlgorithm_CreateFunc* obj, btVoronoiSimplexSolver* value);
	EXPORT btConvexConvexAlgorithm* btConvexConvexAlgorithm_new(btPersistentManifold* mf, btCollisionAlgorithmConstructionInfo* ci, btCollisionObjectWrapper* body0Wrap, btCollisionObjectWrapper* body1Wrap, btVoronoiSimplexSolver* simplexSolver, btConvexPenetrationDepthSolver* pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold);
	EXPORT const btPersistentManifold* btConvexConvexAlgorithm_getManifold(btConvexConvexAlgorithm* obj);
	EXPORT void btConvexConvexAlgorithm_setLowLevelOfDetail(btConvexConvexAlgorithm* obj, bool useLowLevel);
}
