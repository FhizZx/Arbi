#include "plant_part.h"
#include "raymath.h"

PlantPart::PlantPart(Stem& parent, float pitch, float yaw, Vector3 location): parentStem(&parent)  {
    modelTransform = MatrixMultiply(MatrixTranslate(-location.x, -location.y, -location.z),
                     MatrixRotateXYZ((Vector3){DEG2RAD*pitch,DEG2RAD*yaw,0.0f}));
    //location = Vector3Add(parentStem->location, offset);
}

PlantPart::PlantPart(Stem& parent, float pitch, float yaw): PlantPart(parent, pitch, yaw, Vector3Zero()) {}
