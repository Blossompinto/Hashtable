#pragma once
#include vector
#include Node.h

class Hash{
    private:
    std::vector<Node*> bucket;
    int capacity;
    int items;
    int get_index(std::string &key);

    public:
    Hash(int initial_capacity = 10);
    ~Hash();
    void insert(std::string &k, int val);
    void delete();
};
