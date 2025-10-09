#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100

char maze[MAXN][MAXN];
int visited[MAXN][MAXN];
int parent[MAXN][MAXN][2]; // For path reconstruction
int rows, cols;

typedef struct { int x, y; } Point;
Point queue[MAXN*MAXN];
int front, rear;

// Directions: up, down, left, right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// Read maze from file
void load_maze(const char *filename) {
    FILE *f = fopen(filename, "r");
    rows = 0;
    while (fgets(maze[rows], MAXN, f)) {
        maze[rows][strcspn(maze[rows], "\n")] = 0;
        rows++;
    }
    cols = strlen(maze[0]);
    fclose(f);
}

// Find Start and End
void find_points(Point *start, Point *end) {
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++) {
            if (maze[i][j] == 'S') { start->x = i; start->y = j; }
            if (maze[i][j] == 'E') { end->x = i; end->y = j; }
        }
}

// BFS for shortest path
void bfs(Point start, Point end) {
    memset(visited, 0, sizeof(visited));
    front = rear = 0;
    queue[rear++] = start;
    visited[start.x][start.y] = 1;
    parent[start.x][start.y][0] = -1;

    while (front < rear) {
        Point p = queue[front++];
        if (p.x == end.x && p.y == end.y) break;
        for (int d=0; d<4; d++) {
            int nx = p.x + dx[d], ny = p.y + dy[d];
            if (nx>=0 && nx<rows && ny>=0 && ny<cols &&
                !visited[nx][ny] && maze[nx][ny]!='#') {
                visited[nx][ny] = 1;
                parent[nx][ny][0] = p.x; parent[nx][ny][1] = p.y;
                queue[rear++] = (Point){nx, ny};
            }
        }
    }
}

// Highlight path
void highlight_path(Point start, Point end) {
    int x = end.x, y = end.y;
    while (parent[x][y][0] != -1) {
        if (maze[x][y] != 'E') maze[x][y] = '*'; // Mark the path
        int px = parent[x][y][0], py = parent[x][y][1];
        x = px; y = py;
    }
}

// Print Maze
void print_maze() {
    for(int i=0; i<rows; i++)
        printf("%s\n", maze[i]);
}

int main() {
    load_maze("maze.txt");
    Point start, end;
    find_points(&start, &end);

    bfs(start, end);
    highlight_path(start, end);

    printf("Maze with solution path:\n");
    print_maze();
    return 0;
}
