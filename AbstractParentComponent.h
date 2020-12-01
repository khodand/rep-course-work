//
// Created by khodand on 22.11.2020.
//

#pragma once

#include "AbstractGraphicalComponent.h"

#include <list>

class AbstractParentComponent : public AbstractGraphicalComponent {
public:
    AbstractParentComponent(bool isHidden, Point downLeftCorner, Point upRightCorner);

    ~AbstractParentComponent();

    void addChild(AbstractGraphicalComponent *child);

    void removeChild(AbstractGraphicalComponent *child);

    void moveOn(Point p) override;

    void print() override;

protected:
    std::list <AbstractGraphicalComponent *> mChildren; // Does not have ownership of the children.
};

