
#ifndef ICOSAHEDRON_H
#define ICOSAHEDRON_H

const int num_icosahedron_indices = 60;
const int num_icosahedron_vertices = 36;
const int num_icosahedron_colors = 48;

static const GLfloat icosahedronVertices[]= {
	0, -0.525731, 0.850651,             // vertices[0]
	0.850651, 0, 0.525731,              // vertices[1]
	0.850651, 0, -0.525731,             // vertices[2]
	-0.850651, 0, -0.525731,            // vertices[3]
	-0.850651, 0, 0.525731,             // vertices[4]
	-0.525731, 0.850651, 0,             // vertices[5]
	0.525731, 0.850651, 0,              // vertices[6]
	0.525731, -0.850651, 0,             // vertices[7]
	-0.525731, -0.850651, 0,            // vertices[8]
	0, -0.525731, -0.850651,            // vertices[9]
	0, 0.525731, -0.850651,             // vertices[10]
	0, 0.525731, 0.850651              // vertices[11]
};

static const GLfloat icosahedronColors[] = {
	1.0, 0.0, 0.0, 1.0,
	1.0, 0.5, 0.0, 1.0,
	1.0, 1.0, 0.0, 1.0,
	0.5, 1.0, 0.0, 1.0,
	0.0, 1.0, 0.0, 1.0,
	0.0, 1.0, 0.5, 1.0,
	0.0, 1.0, 1.0, 1.0,
	0.0, 0.5, 1.0, 1.0,
	0.0, 0.0, 1.0, 1.0,
	0.5, 0.0, 1.0, 1.0,
	1.0, 0.0, 1.0, 1.0,
	1.0, 0.0, 0.5, 1.0
};

static const GLubyte icosahedronIndicies[] = {
	1, 2, 6,
	1, 7, 2,
	3, 4, 5,
	4, 3, 8,
	6, 5, 11,
	5, 6, 10,
	9, 10, 2,
	10, 9, 3,
	7, 8, 9,
	8, 7, 0,
	11, 0, 1,
	0, 11, 4,
	6, 2, 10,
	1, 6, 11,
	3, 5, 10,
	5, 4, 11,
	2, 7, 9,
	7, 1, 0,
	3, 9, 8,
	4, 8, 0,
};

static const GLfloat icosahedronNormals[] = {
	0.000000, -0.417775, 0.675974,
	0.675973, 0.000000, 0.417775,
	0.675973, -0.000000, -0.417775,
	-0.675973, 0.000000, -0.417775,
	-0.675973, -0.000000, 0.417775,
	-0.417775, 0.675974, 0.000000,
	0.417775, 0.675973, -0.000000,
	0.417775, -0.675974, 0.000000,
	-0.417775, -0.675974, 0.000000,
	0.000000, -0.417775, -0.675973,
	0.000000, 0.417775, -0.675974,
	0.000000, 0.417775, 0.675973,
};

#endif