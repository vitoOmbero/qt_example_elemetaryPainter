#include "drawableobject.h"

DrawableObject::DrawableObject()
{

}

unsigned int DrawableObject::getLayer() const
{
    return layer;
}

void DrawableObject::setLayer(unsigned int value)
{
    layer = value;
}

Point *DrawableObject::getAnchor() const
{
    return anchor;
}

void DrawableObject::setAnchor(Point *value)
{
    anchor = value;
}

int DrawableObject::getFacingAngle() const
{
    return facingAngle;
}

void DrawableObject::setFacingAngle(int value)
{
    facingAngle = value;
}

DrawableObject::FormState DrawableObject::getFormState() const
{
    return formState;
}

void DrawableObject::setFormState(const FormState &value)
{
    formState = value;
}
