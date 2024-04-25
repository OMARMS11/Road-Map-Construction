#pragma once
#include <unordered_map>
#include<set>
#include <list>
#include <string>
using namespace std;

class Edge {
	double length;
	string vertex1, vertex2;
};

class Graph
{
	unordered_map<string, list<Edge>> adjacencyList;
	
	void insertVertex(string);
	void insertEdge(string, string, double);
	void deleteVertex(string);
	void deleteEdge(string, string);
	void DFStraversal(int v);
	void DFStil(string v, set<string>& s);
	void BFStraversal();
	void PrimMinimumSpanningTree();
};

