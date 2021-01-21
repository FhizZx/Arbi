#ifndef WORLD_H
#define WORLD_H

class World {
public:
    void update();
    void render();
private:
    std::unordered_set<Plant> plants;
    void calculateSunlight();

};

#endif // WORLD_H
