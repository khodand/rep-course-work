//
// Created by khodand on 22.11.2020.
//

#pragma once

#include "AbstractGraphicalComponent.h"

class AbstractParentComponent : public AbstractGraphicalComponent {
public:
    void addChild(AbstractGraphicalComponent *);

private:

};

