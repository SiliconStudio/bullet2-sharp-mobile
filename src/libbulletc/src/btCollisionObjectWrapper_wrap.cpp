#include "conversion.h"
#include "btCollisionObjectWrapper_wrap.h"

const btCollisionObject* btCollisionObjectWrapper_getCollisionObject(btCollisionObjectWrapper* obj)
{
	return obj->getCollisionObject();
}

const btCollisionShape* btCollisionObjectWrapper_getCollisionShape(btCollisionObjectWrapper* obj)
{
	return obj->getCollisionShape();
}

int btCollisionObjectWrapper_getIndex(btCollisionObjectWrapper* obj)
{
	return obj->m_index;
}

const btCollisionObjectWrapper* btCollisionObjectWrapper_getParent(btCollisionObjectWrapper* obj)
{
	return obj->m_parent;
}

int btCollisionObjectWrapper_getPartId(btCollisionObjectWrapper* obj)
{
	return obj->m_partId;
}

void btCollisionObjectWrapper_getWorldTransform(btCollisionObjectWrapper* obj, btScalar* value)
{
	btTransformToMatrix(&obj->getWorldTransform(), value);
}

void btCollisionObjectWrapper_setCollisionObject(btCollisionObjectWrapper* obj, btCollisionObject* value)
{
	obj->m_collisionObject = value;
}

void btCollisionObjectWrapper_setIndex(btCollisionObjectWrapper* obj, int value)
{
	obj->m_index = value;
}

void btCollisionObjectWrapper_setParent(btCollisionObjectWrapper* obj, btCollisionObjectWrapper* value)
{
	obj->m_parent = value;
}

void btCollisionObjectWrapper_setPartId(btCollisionObjectWrapper* obj, int value)
{
	obj->m_partId = value;
}

void btCollisionObjectWrapper_setShape(btCollisionObjectWrapper* obj, btCollisionShape* value)
{
	obj->m_shape = value;
}
