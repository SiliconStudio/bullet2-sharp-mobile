#include <BulletCollision/CollisionShapes/btShapeHull.h>

#include "conversion.h"
#include "btShapeHull_wrap.h"

btShapeHull* btShapeHull_new(btConvexShape* shape)
{
	return new btShapeHull(shape);
}

bool btShapeHull_buildHull(btShapeHull* obj, btScalar margin)
{
	return obj->buildHull(margin);
}

const unsigned int* btShapeHull_getIndexPointer(btShapeHull* obj)
{
	return obj->getIndexPointer();
}

const btVector3* btShapeHull_getVertexPointer(btShapeHull* obj)
{
	return obj->getVertexPointer();
}

int btShapeHull_numIndices(btShapeHull* obj)
{
	return obj->numIndices();
}

int btShapeHull_numTriangles(btShapeHull* obj)
{
	return obj->numTriangles();
}

int btShapeHull_numVertices(btShapeHull* obj)
{
	return obj->numVertices();
}

void btShapeHull_delete(btShapeHull* obj)
{
	delete obj;
}