#ifndef MANHATTAN_H
#define MANHATTAN_H

#define ABS(x) ((x) < 0 ? -(x) : (x))

typedef struct {
    int x;
    int y;
} Point;

int manhattan(Point a, Point b);

#endif
