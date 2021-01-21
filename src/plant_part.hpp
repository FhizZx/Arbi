#ifndef PLANT_PART_H
#define PLANT_PART_H

#include "raylib.h"

class Stem;

class PlantPart {
public:

    static const Model model;
    Matrix modelTransform;

    PlantPart(Stem &parent, float pitchAngle, float yawAngle, Vector3 offset);
    PlantPart(Stem &parent, float pitchAngle, float yawAngle);

    float energyCost();

    void destroy() {}
private:
    //Local location of the plant part relative to the plant's location in the world
    Vector3 location;

    //The stem on top of which this part sits
    Stem * const parentStem;


};

#endif // PLANT_PART_H
