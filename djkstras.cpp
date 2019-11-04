#include <stdio.h>
using namespace std;

//Pseudocode
// -let s be root node, set d(s)=0
// -set distance of all other vertices to -1(infinity)
// -let visitingNode = s
// -While their is an unvisited node in g
//     -for each edge coming out of visitingNode
//         -if the visitedNode neighbor has not been visited and if d(visitingNode) + d(edge) < d(neighbor)
//             -set d(neigbor)=d(visitingNode) + d(edge)
//     visited[visitingNode] = true
//     remove visitingNode from G
//     visitingNode = unvisited node with least weight



//testing
int main(){

}