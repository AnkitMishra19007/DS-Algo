/*	Adjacency List implementation of graph
 *
 *	1. read_graph(graph *g, bool directed): take input from terminal and create
 *	   a graph in adjacency list representation.
 *
 *	2. print_graph(graph *g): print graph
 */
#define MAXV 100				// maximum number of vertices

typedef struct graph graph;
typedef struct edgenode edgenode;

void insert_edge(graph *g, int x, int y, bool directed);

struct edgenode{
	int y;					// y will be in x adjacency list
	int weight;				// edge weight
	struct edgenode *next;				// next edge in the list
};

struct graph{
	edgenode* edges[MAXV+1];		// adjacency info
	int degree[MAXV+1];			// outdegree of each vertex
	int nvertices;				// No. of vertices in graph
	int nedges;				// No. of edges in graph
	bool directed;				// is graph directed
};

void intialise_graph(graph *g, bool directed) {
	g->nvertices = 0;
	g->nedges = 0;
	g->directed = directed;

	for(int i=0; i<MAXV; i++) g->degree[i] = 0;
	for(int i=0; i<MAXV; i++) g->edges[i] = NULL;
}

void read_graph(graph *g, bool directed) {
	int m;					// number of edges
	int x, y;				// vertices in edge (x, y)

	intialise_graph(g, directed);
/*
 *	Enter input as:
 *	Number of vertices(n), Number of edges(m)
 *	m number of edges as x, y
 */
	scanf("%d %d", &(g->nvertices), &m);

	for(int i=0; i<m; i++) {
		scanf("%d %d", &x, &y);
		insert_edge(g, x, y, directed);
	}
}

void insert_edge(graph *g, int x, int y, bool directed) {
	edgenode *p;
	p = malloc(sizeof(edgenode));

	p->y = y;
	p->weight = 1;
	p->next = g->edges[x];

	g->edges[x] = p;
	g->degree[x]++;

	if(directed == false)
		insert_edge(g, y, x, true);
	else
		g->nedges++;
}

void print_graph(graph *g) {
	struct edgenode *p;
	for(int i=0; i<g->nvertices; i++) {
		printf("%d: ", i);
		p = g->edges[i];
		while(p != NULL) {
			printf(" %d", p->y);
			p = p->next;
		}
		printf("\n");
	}
}
