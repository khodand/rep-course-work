//
// Created by khodand on 22.11.2020.
//

#include <iostream>
#include "TextComponent.h"

TextComponent::TextComponent(const string &text, bool isHidden, Point downLeftCorner, Point upRightCorner)
        : AbstractGraphicalComponent(isHidden, downLeftCorner, upRightCorner)
        , mText(text)
		, mClassName("Text")
        {}

void TextComponent::setText(const string &text) {
    mText = text;
}

string TextComponent::getText() {
    return mText;
}

void TextComponent::print() {
    cout << mClassName << ": " << mText << endl;
    AbstractGraphicalComponent::print();
}
