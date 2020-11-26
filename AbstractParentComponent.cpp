//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include "AbstractParentComponent.h"

AbstractParentComponent::AbstractParentComponent(bool isHidden,
                                                 const AbstractGraphicalComponent::Point downLeftCorner,
                                                 const AbstractGraphicalComponent::Point upRightCorner)
        : AbstractGraphicalComponent(isHidden, downLeftCorner, upRightCorner)
{}

AbstractParentComponent::~AbstractParentComponent() {
    mChildren.clear();
}

void AbstractParentComponent::addChild(AbstractGraphicalComponent *child) {
    if (getDownLeftCorner() > child->getDownLeftCorner() || child->getUpRightCorner() > getUpRightCorner()) {
        std::cout << "Impossible to add child. No space."<< std::endl;
        return;
    }
    child->setParent(this);
    mChildren.push_back(child);
}

void AbstractParentComponent::removeChild(AbstractGraphicalComponent *child) {
    mChildren.remove(child);
}

void AbstractParentComponent::moveOn(AbstractGraphicalComponent::Point p) {
    AbstractGraphicalComponent::moveOn(p);
    for (auto &child : mChildren) {
        child->moveOn(p);
    }
}

void AbstractParentComponent::print() {
    AbstractGraphicalComponent::print();
    std::cout << "{" << std::endl;
    for (auto &child : mChildren) {
        child->print();
    }
    std::cout << "}" << std::endl;
}
