#ifndef CIRCLE_H
#define CIRCLE_H

class circle{
    public:
        circle();
        circle(double radius);
        double getRadius();
        void setRadius(double radius);
        double circumference();
        double area();

    private:
        double radius;
};

#endif