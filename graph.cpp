#include "graph.h"
#include<iostream>

void Graph::PrimMinimumSpanningTree() {

}
void Graph::DFSthelper(string v, unordered_map<string, bool>& visited)
{
	visited[v] = true;

	std::cout << v << " ";

	for (auto it = adjacencyList[v].begin(); it != adjacencyList[v].end(); it++) {
		if (!visited[*it]) {
			DFSthelper(*it, visited);
		}
	}
}
void Graph::DFStraversal(string v) {
	unordered_map<string, bool> visited;

	DFSthelper(v, visited);
	
}
