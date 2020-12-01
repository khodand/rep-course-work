//
// Created by khodand on 22.11.2020.
//

#pragma once

#include "AbstractParentComponent.h"

class PanelComponent : public AbstractParentComponent {
public:
    PanelComponent(bool isHidden, Point downLeftCorner, Point upRightCorner);

    void print() override;

private:
    const std::string mClassName;
};

