#ifndef DRAWABLEOBJECT_H
#define DRAWABLEOBJECT_H

#include <QObject>

class Point;

class DrawableObject : public QObject
{
public:
    enum class FormState {Empty, Full};
    DrawableObject();

    Point *getAnchor() const;
    void setAnchor(Point *value);

    int getFacingAngle() const;
    void setFacingAngle(int value);

    FormState getFormState() const;
    void setFormState(const FormState &value);

private:

    Point *anchor;
    int facingAngle;
    FormState formState;

};

#endif // DRAWABLEOBJECT_H
