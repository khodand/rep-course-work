//
// Created by khodand on 22.11.2020.
//

#pragma once

#include "GraphicalComponentInterface.h"

class WindowComponent : public GraphicalComponentInterface {
public:
    WindowComponent();

    ~WindowComponent() override;

    bool isHidden() override;

    void moveOn(int x, int y) override;

    void setPosition(int x, int y) override;

    void setPosition(Point) override;

    Point getPosition() override;

};

