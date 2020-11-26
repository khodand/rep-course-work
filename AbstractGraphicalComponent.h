//
// Created by khodand on 22.11.2020.
//

#pragma once

class AbstractGraphicalComponent {
public:
    struct Point {
        int x;
        int y;

        Point (int nx, int ny)
                : x(nx)
                , y(ny)
                {}

        Point operator+(Point value) const {
            return Point(x + value.x, y + value.y);
        }

        Point operator-(Point value) const {
            return Point(x - value.x, y - value.y);
        }

        bool operator> (const Point &p) const {
            return x > p.x && y > p.y;
        }
    };

    AbstractGraphicalComponent(bool isHidden, Point downLeftCorner, Point upRightCorner);

    virtual ~AbstractGraphicalComponent() = default;

    virtual bool isHidden();

    virtual void setVisible(bool visible);

    virtual void moveOn(int x, int y);

    virtual void moveOn(Point p);

    virtual void setPosition(int x, int y);

    virtual void setPosition(Point p);

    /// Returns center of the component
    Point getPosition() const;

    Point getDownLeftCorner();

    Point getUpRightCorner();

    void setParent(AbstractGraphicalComponent *parent);

    virtual void print();

private:
    AbstractGraphicalComponent *mParent {nullptr};

    bool mIsHidden;

    Point mDownLeftCorner;
    Point mUpRightCorner;
};
