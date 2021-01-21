#ifndef TURTLE_H
#define TURTLE_H

#include <stack>

struct State {
    Vector3 position;
    Quaternion orientation;
};

class Turtle {

public:
    void toggleDraw(bool draw);
    void rotate(float yaw, float pitch, float roll);
    void move(float distance);
    void popState();
    void pullState();

private:
    bool isDrawing;
    std::stack<State> savedStates;
    State currentState;
};


#endif // TURTLE_H
