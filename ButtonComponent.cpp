//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include "ButtonComponent.h"

ButtonComponent::ButtonComponent(bool isHidden, Point downLeftCorner, Point upRightCorner)
        : AbstractGraphicalComponent(isHidden, downLeftCorner, upRightCorner)
		, mClassName("Button")
{}

void ButtonComponent::print() {
    std::cout << mClassName;
    AbstractGraphicalComponent::print();
}

void ButtonComponent::activate() {
    std::cout << "Button pressed";
}
