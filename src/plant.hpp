#ifndef PLANT_H
#define PLANT_H

#include <set>
#include <vector>
#include "leaf.h"
#include "pollen.h"
#include "bud.h"
#include "raylib.h"
#include "flower.h"

enum PartType {LeafT, FlowerT, StemT, BudT};

const int MAX_PART_FLOAT_VARS = 4;

struct PartTemplate {
    PartType type;
    int ivar;
    float fvars[MAX_PART_FLOAT_VARS];
};

class Plant {
public:
    /** Location of the plant within the world */
    const Vector3 location;

    /** Collection of pointers to all of the leaves of the plant, used to calculate the energy gained from the sun */
    std::vector <Leaf> leaves;

    std::set <Flower> flowers;

    std::set <Bud> buds;

    void update();
private:

    Stem * root;

    /** The energy used by the plant to grow. Energy is increased through photosynthesis, leaves producing more from
        the sunlight received. The energy is then used to maintain current processes and to grow new parts from
        the meristems. The plant dies when the stored energy has been reduced to 0. */
    float storedEnergy;

    /** Use energy stored in the plant to maintain existing plant parts, shedding some of them if they consume more than
        they produce. */
    void maintenance();


    /** Grow new twigs, leaves and flowers from the buds, based on the stored energy and the energy produced in their
        vicinity. */
    void grow();

    void growPart(PartTemplate partTemplate, Stem* parentStem);


    /** The flowers of the plant produce pollen, which is then released into the world */
    std::vector<Pollen> releasePollen();


    /** */
    //std::vector<Seed> producedSeeds();


    //genes: set of rules, etc.
    //reproduce: produce gametes for reproduction


};

#endif // PLANT_H
