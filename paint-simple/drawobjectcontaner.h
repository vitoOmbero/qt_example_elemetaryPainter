#ifndef DRAWOBJECTCONTANER_H
#define DRAWOBJECTCONTANER_H

#include <deque>
#include <QObject>
#include "drawableobject.h"

class DrawObjectContaner : public QObject
{
    Q_OBJECT
public:
    explicit DrawObjectContaner(QObject *parent = nullptr);

    void add();
    void add(unsigned int n);
    void add(DrawableObject figure);
    void delete_(DrawableObject figure);
    void delete_(unsigned int itemIndex);
    void shiftToLayer(unsigned int itemIndex, unsigned int layerIndex);
    void shiftDelta(unsigned int itemIndex, int layerDelta);

private:
    void paint();



//members
private:
    std::deque<DrawableObject>* items;
    DrawableObject* lastAddedItem;

signals:

public slots:
};

#endif // DRAWOBJECTCONTANER_H
