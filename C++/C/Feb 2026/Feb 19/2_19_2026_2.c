#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROWS 5
#define COLS 5

typedef struct{
    int row;
    int col;
    int distance;
}Point;

typedef struct{
    Point data[100];
    int front;
    int rear;
}Queue;

void init_queue(Queue *q){
    q->front = 0;
    q->rear = 0;
}

bool is_empty(Queue *q){
    return q->front == q->rear;
}

void enqueue(Queue *q, Point p){
    q->data[q->rear] =p;
    q->rear++;
}

Point dequeue(Queue *q){
    Point p = q->data[q->front];
    q->front++;
    return p;
}

int maze[ROWS][COLS] = {
    {0,1,0,0,0},
    {0,1,0,1,0},
    {0,0,0,1,0},
    {0,1,1,1,0},
    {0,0,0,0,0}
};

int dRow[] = {-1,1, 0, 0};
int dCol[] = {0 , 0,-1, 1};

int solve_maze(Point start, Point goal){
    bool visited[ROWS][COLS] ={false};

    Queue q;
    init_queue(&q);

    visited[start.row][start.col]=true;
    enqueue(&q, start);

    printf("--- Exploring Maze ---\n");

    while(!is_empty(&q)){
        Point current = dequeue(&q);

        printf("Visiting: (%d, %d) | Distance: %d\n",
            current.row, current.col, current.distance);
        
        if(current.row == goal.row&& current.col == goal.col){
            return current.distance;
        }

        for(int i = 0; i < 4;i++){
            int next_row = current.row + dRow[i];
            int next_col = current.col + dCol[i];

            bool is_inside = (next_row>= 0&&next_row < ROWS && next_col >= 0 && next_col < COLS);
            if(is_inside && maze[next_row][next_col] == 0 && !visited[next_row][next_col]){

                visited[next_row][next_col] = true;
                Point next_point = {next_row, next_col, current.distance +1};
                enqueue(&q, next_point);
            }
        }
    }
    return -1;
}

int main(){
    printf("=== BFS Maze Solver ===\n\n");

    Point start = {0,0,0};
    Point goal  = {4,4,0};

    int shortest_path = solve_maze(start, goal);

    printf("\n--- Result ---\n");
    if(shortest_path != -1){
        printf("Goal Reached! Shortest path is %d steps.\n", shortest_path);
    }else{
        printf("Trapped! No path to the goal.\n");
    }
    return 0;
}