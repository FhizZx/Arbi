#ifndef STEM_H
#define STEM_H

#include <list>

#include "plant_part.h"


class Stem: public PlantPart {
public:
    float length;

    Stem(Stem &parent, float length, float pitch, float yaw);
    ~Stem();
private:


    //The plant parts growing directly from this stem
    std::list<PlantPart*> childrenParts;


    void destroy();

};

#endif // STEM_H
