#include<bits/stdc++.h> 
using namespace std; 
  
// Define the number of runs for the test data 
// generated 
#define RUN 1
  
// Define the maximum number of vertices of the graph 
#define MAX_VERTICES 200000 
  
// Define the maximum number of edges 
#define MAX_EDGES 100000 
  
int main() 
{ 
    set<pair<int, int>> container; 
    set<pair<int, int>>::iterator it; 
  
    // Uncomment the below line to store 
    // the test data in a file 
    // freopen("Test_Cases_Undirected_Unweighted_Graph.in", 
    //         "w", stdout); 
  
    // For random values every time 
    srand(time(NULL)); 
  
    int NUM;    // Number of Vertices 
    int NUMEDGE; // Number of Edges 
   cout<<RUN<<endl;
    for (int i=1; i<=RUN; i++) 
    { 
        NUM = 1 + rand() % MAX_VERTICES; 
        NUMEDGE = 1 + rand() % MAX_EDGES; 
  
        while (NUMEDGE > NUM*(NUM-1)/2) 
            NUMEDGE = 1 + rand() % MAX_EDGES; 
  
        set<pair<int,int>> se;
        printf("%d\n", NUM); 
        for(int ii=1;ii<=NUM;ii++)
        {
            cout<<(rand()%2)<<" ";
        }
        cout<<endl;
        for (int j=1; j<=NUMEDGE*10; j++) 
        { 
            int a =1+ rand() % NUM; 
            int b =1+ rand() % NUM; 
            if(a==b)
            {
                b++;
                if(b>NUM)
                break;
            }
            pair<int, int> p = make_pair(a, b); 
            pair<int, int> reverse_p = make_pair(b, a); 
            if(container.find(p) == container.end()  
                    &&container.find(reverse_p) == container.end()) 
            { 
               container.insert(p);  
            } 
            if(container.size()==NUMEDGE)
            break;
            
        } 
        cout<<container.size()<<endl;
        for (it=container.begin(); it!=container.end(); ++it) 
            printf("%d %d\n", it->first, it->second); 
        container.clear(); 
  
    } 
  
    return(0); 
} 
