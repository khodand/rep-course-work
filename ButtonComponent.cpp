//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include "ButtonComponent.h"

void ButtonComponent::print() {
    std::cout << mClassName;
    AbstractGraphicalComponent::print();
}

void ButtonComponent::activate() {
    std::cout << "Button pressed";
}

ButtonComponent::ButtonComponent(bool isHidden, Point downLeftCorner, Point upRightCorner)
        : AbstractGraphicalComponent(isHidden, downLeftCorner, upRightCorner) {

}
