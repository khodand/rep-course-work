//
// Created by khodand on 22.11.2020.
//

#pragma once

#include <string>
#include "AbstractParentComponent.h"

using namespace std;

class WindowComponent : public AbstractParentComponent {
public:
    WindowComponent(const string &title, bool isHidden, Point downLeftCorner, Point upRightCorner);

    void setVisible(bool visible) override;

    void print() override;

    void setTitle(const string &title);

    string getTitle();

private:
    const string mClassName {"Window"};

    string mTitle {};
};

