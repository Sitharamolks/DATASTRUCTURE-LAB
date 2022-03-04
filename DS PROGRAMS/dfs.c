#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int vertex;
	struct node *next;
}*adj[20];
int v,e;
int visited[20],top[20];
int t=0;
void dfs();
void dfsvisit();

void main()
{
	int s,i,en;
	struct node *ne;
	printf("Enter no of vertices");
	scanf("%d",&v);
	for(i=0;i<=v;i++)
		adj[i]=NULL;
	printf("Enter no of edjes");
	scanf("%d",&e);
	printf("Enter edges");
	printf("\nstart End\n");
	for(i=0;i<e;i++)
	{
		scanf("%d%d",&s,&en);
		ne=(struct node*)malloc(sizeof(struct node));
		ne->vertex=en;
		ne->next=adj[s];
		adj[s]=ne;
	}
	
	dfs();
	printf("\nTopological sort order\n");
	for(i=t-1;i>=0;i--)
		printf("%d ",top[i]);
		
	getch();
}
void dfs()
{
	int i;
	for(i=0;i<=v;i++)
		visited[i]=0;
	printf("\nDFS\n");
	for(i=1;i<=v;i++)
		if(visited[i]==0)
			dfsvisit(i);
}

void dfsvisit(int u)
{
	int w;
	struct node *ptr;
	visited[u]=1;
	printf("%d ",u);
	ptr=adj[u];
	while(ptr!=NULL)
	{
		w=ptr->vertex;
		if(visited[w]==0)
			dfsvisit(w);
		ptr=ptr->next;
				
	}
	top[t]=u;
	t++;
	
}

