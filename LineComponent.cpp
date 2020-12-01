//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include "LineComponent.h"

LineComponent::LineComponent(bool isHidden, Point downLeftCorner, Point upRightCorner)
        : AbstractGraphicalComponent(isHidden, downLeftCorner, upRightCorner) 
		, mClassName("Line")
{}

void LineComponent::print() {
    std::cout << mClassName;
    AbstractGraphicalComponent::print();
}
