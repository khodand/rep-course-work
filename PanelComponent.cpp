//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include "PanelComponent.h"

PanelComponent::PanelComponent(bool isHidden, Point downLeftCorner, Point upRightCorner)
        : AbstractParentComponent(isHidden, downLeftCorner, upRightCorner)
		, mClassName("Panel")
{}

void PanelComponent::print() {
    std::cout << mClassName << std::endl;
    AbstractParentComponent::print();
}
