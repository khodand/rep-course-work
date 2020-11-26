//
// Created by khodand on 22.11.2020.
//

#pragma once


#include <string>
#include "AbstractGraphicalComponent.h"

using namespace std;
class TextComponent : public AbstractGraphicalComponent {
public:
    TextComponent(const std::string &text, bool isHidden, Point downLeftCorner, Point upRightCorner);

    void setText(const string&);

    string getText();

    void print() override;

private:
    string mText;
    const string mClassName {"Text"};
};
