#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <unordered_map>
#include <vector>

using namespace std;

class neighbor{
public:
    string destination;
    int weight;
};

class graph{
public:

    unordered_map < string , vector < neighbor > > map;
    void addEdge(string src , string dst , int distance);
    void removeEdge(string src , string dst);
    void removeNode(string twn);
    void viewMap();
    void dijkstra(string src , string dst);

};


#endif // GRAPH_H_INCLUDED
