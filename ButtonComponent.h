//
// Created by khodand on 22.11.2020.
//

#pragma once


#include "AbstractGraphicalComponent.h"

class ButtonComponent : public AbstractGraphicalComponent {
public:
    ButtonComponent(bool isHidden, Point downLeftCorner, Point upRightCorner);

    void print() override;

    void activate();

private:
    const std::string mClassName;
};
