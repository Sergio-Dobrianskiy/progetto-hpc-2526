#ifndef IO_H
#define IO_H

#include <stdio.h>
#include <stdlib.h>

void *safe_malloc(size_t size);

void read_input(FILE *f);
void save_results(FILE *f);

#ifdef MAKE_MOVIE
void save_centroids(int iter);
void save_clusters(int iter);
#endif

#endif /* IO_H */