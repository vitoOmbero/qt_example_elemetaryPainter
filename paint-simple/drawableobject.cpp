#include "drawableobject.h"

DrawableObject::DrawableObject()
{

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
