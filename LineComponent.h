//
// Created by khodand on 22.11.2020.
//

#pragma once


#include "AbstractGraphicalComponent.h"

class LineComponent : public AbstractGraphicalComponent {
public:
    LineComponent(bool isHidden, Point downLeftCorner, Point upRightCorner);
    void print() override;

private:
    const std::string mClassName {"Line"};
};

