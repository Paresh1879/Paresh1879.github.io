#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <string>

class GameObject {
private:
    std::string name;
    int id;

public:
    GameObject();
    GameObject(std::string name, int id);

    ~GameObject();

    std::string getName() const;
    void setName(const std::string& name);

    int getId() const;
    void setId(int id);

    void performAction();
};

#endif // GAME_OBJECT_H
