#ifndef LEAF_H
#define LEAF_H

#include "plant_part.h"

class Leaf: public PlantPart {
public:
    Leaf(Stem &parent, float width, float height, float pitch, float yaw);
    const float width;
    const float length;
private:

};

#endif // LEAF_H
