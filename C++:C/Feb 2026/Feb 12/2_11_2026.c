#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num_vertices;
    int **matrix;
    char **names;
}SocialGraph;

SocialGraph* create_graph(int vertices){
    SocialGraph *g = (SocialGraph*)malloc(sizeof(SocialGraph));
    g->num_vertices = vertices;

    g->names = (char**)malloc(vertices * sizeof(char*));

    g->matrix = (int**)malloc(vertices * sizeof(int*));

    for(int i = 0; i<vertices;i++){
        g->names[i] = (char*)malloc(20 * sizeof(char));
        g->matrix[i] = (int*)malloc(vertices * sizeof(int));

        for(int j= 0; j<vertices;j++){
            g->matrix[i][j] =0;
        }
    }

    printf("[Init] Social Graph created for %d peple.\n", vertices);
    return g;
}

void set_name(SocialGraph *g, int id,const char *name){
    if(id >= 0 && id <g->num_vertices){
        sprintf(g->names[id], "%s", name);
    }
}

void add_friend(SocialGraph *g, int src,int dest)
{
    g->matrix[src][dest] = 1;
    g->matrix[dest][src] = 1;
    printf(">> Friend added: %s <---> %s\n",g->names[src],g->names[dest]);

}

void check_connection(SocialGraph *g, int src,int dest){
    if(g->matrix[src][dest]==1){
        printf("[Check] Yes! %s and %s are friends.\n",g->names[src],g->names[dest]);
     }else{
        printf("[Check] No... %s and %s are not connected.\n", g->names[src], g->names[dest]);
        }
}

void print_matrix(SocialGraph *g){
    printf("\n--- Adjacency Matrix ---\n");
    printf("     ");
    for(int i = 0;i <g->num_vertices;i++){
        printf("%s ", g->names[i]);
    }
    printf("\n");

    for(int i = 0; i < g->num_vertices;i++){
        printf("%s ",g->names[i]);
        for(int j = 0;j<g->num_vertices;j++){
         printf("%d: ", g->matrix[i][j]);
    }
    printf("\n");
}
printf("------------------------\n\n");
}

void destroy_graph(SocialGraph *g){
    for(int i = 0;i< g->num_vertices;i++){
        free(g->matrix[i]);
        free(g->names[i]);
    }
    free(g->matrix);
    free(g->names);
    free(g);
    printf("[Free] Graph memory released.\n");
}

int main(){
    SocialGraph *sns = create_graph(3);

    set_name(sns,0,"Joji");
    set_name(sns,1,"Mike");
    set_name(sns,2,"Sara");

    add_friend(sns, 0,1);
    print_matrix(sns);

    check_connection(sns,0,1);
    check_connection(sns,0,2);
    destroy_graph(sns);

    return 0;
}