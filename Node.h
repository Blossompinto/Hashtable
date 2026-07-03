#pragma once
#include string
#include string
#include vector

struct Node{
    std::string key;
    int val;
    Node* next;
    
    Node(std::string _key, int _val){
        key = _key;
        val = _val;
        next = nullptr;
    }
};
