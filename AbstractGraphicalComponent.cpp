//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include "AbstractGraphicalComponent.h"

AbstractGraphicalComponent::AbstractGraphicalComponent(bool isHidden, Point downLeftCorner, Point upRightCorner)
                                                       : mIsHidden(isHidden)
                                                       , mDownLeftCorner(downLeftCorner)
                                                       , mUpRightCorner(upRightCorner)
                                                       {}

bool AbstractGraphicalComponent::isHidden() {
    return mIsHidden;
}

void AbstractGraphicalComponent::setVisible(bool visible) {
    mIsHidden = visible;
}

void AbstractGraphicalComponent::moveOn(AbstractGraphicalComponent::Point move) {
    if (mParent != nullptr) {
        if (mParent->getDownLeftCorner() > mDownLeftCorner + move ||
            mUpRightCorner + move > mParent->getUpRightCorner()) {
            std::cout << "Cant move. Not enough space." << std::endl;
            return;
        }
        mDownLeftCorner = mDownLeftCorner + move;
        mUpRightCorner = mUpRightCorner + move;
    }
}

void AbstractGraphicalComponent::moveOn(int x, int y) {
    moveOn(Point(x, y));
}

void AbstractGraphicalComponent::setPosition(int x, int y) {
    setPosition(Point(x, y));
}

void AbstractGraphicalComponent::setPosition(AbstractGraphicalComponent::Point p) {
    moveOn(p - getPosition());
}

AbstractGraphicalComponent::Point AbstractGraphicalComponent::getPosition() const {
    return Point((mDownLeftCorner.x + mUpRightCorner.x) / 2, (mDownLeftCorner.y + mUpRightCorner.y) / 2);
}

AbstractGraphicalComponent::Point AbstractGraphicalComponent::getDownLeftCorner() {
    return mDownLeftCorner;
}

AbstractGraphicalComponent::Point AbstractGraphicalComponent::getUpRightCorner() {
    return mUpRightCorner;
}

void AbstractGraphicalComponent::setParent(AbstractGraphicalComponent *parent) {
    mParent = parent;
}

void AbstractGraphicalComponent::print() {
    std::cout << "Is hidden: " << mIsHidden << " DLC: " << mDownLeftCorner.x << " " << mDownLeftCorner.y << " URC: " <<
    mUpRightCorner.x << " " << mUpRightCorner.y << std::endl;
}
