//
// Created by theophrastus on 01.10.2021.
//

#ifndef VASCULAR_TREE_FRACTALIZER_VASCULAR_TREE_NODE_HPP
#define VASCULAR_TREE_FRACTALIZER_VASCULAR_TREE_NODE_HPP

#include "Point.hpp"

struct Vascular_tree_node {
    Point coords;
    Vascular_tree_node * left;
    Vascular_tree_node * right;
    Vascular_tree_node * parent;
    Vascular_tree_node(Point coords, Vascular_tree_node * parent);
    void bifurcate();
};


#endif //VASCULAR_TREE_FRACTALIZER_VASCULAR_TREE_NODE_HPP