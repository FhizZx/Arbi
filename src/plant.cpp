#include "plant.h"

void Plant::maintenance() {
    /** for each plant part
        get energy expended
        reduce energy
        if smaller than 0, die*/
}

void Plant::growPart(PartTemplate pTemp, Stem* parentStem) {
    switch (pTemp.type) {
        case LeafT: {
            Leaf leaf(parentStem, pTemp.fvars(0), pTemp.fvars(1), pTemp.fvars(2), pTemp.fvars(3));
            leaves.push_back(leaf);
        }
        case FlowerT :

        case StemT :
        case BudT :

    }

}
