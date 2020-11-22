//
// Created by khodand on 22.11.2020.
//

#pragma once

class GraphicalComponentInterface {
public:
    struct Point {
        int x;
        int y;
    };

    GraphicalComponentInterface() = default;

    virtual ~GraphicalComponentInterface() = default;

    virtual bool isHidden() = 0;

    virtual void moveOn(int x, int y) = 0;

    virtual void setPosition(int x, int y) = 0;

    virtual void setPosition(Point) = 0;

    virtual Point getPosition() = 0;
};
