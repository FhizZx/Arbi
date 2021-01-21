#include "stem.h"

Stem::Stem(Stem &parent, float length, float pitch, float yaw): PlantPart(parent, pitch, yaw), length(length) {
}

Stem::~Stem() {
    destroy();
}

void Stem::destroy() {
    for (auto part: childrenParts)
        part->destroy();
}
