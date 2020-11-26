//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include <utility>
#include "WindowComponent.h"

WindowComponent::WindowComponent(const string &title, bool isHidden, Point downLeftCorner, Point upRightCorner)
        : AbstractParentComponent(isHidden, downLeftCorner, upRightCorner)
        , mTitle(title)
{}

void WindowComponent::setVisible(bool visible) {
    AbstractGraphicalComponent::setVisible(visible);
    for (auto &c : mChildren) {
        c->setVisible(visible);
    }
}

void WindowComponent::print() {
    cout << mClassName << " " << mTitle << endl;
    AbstractParentComponent::print();
}

void WindowComponent::setTitle(const string &title) {
    mTitle = title;
}

string WindowComponent::getTitle() {
    return mTitle;
}
