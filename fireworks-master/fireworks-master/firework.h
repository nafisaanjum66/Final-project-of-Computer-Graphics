#ifndef FIREWORK_H
#define FIREWORK_H

#include <cstdlib>
#include <GL/gl.h> // OpenGL headers

const GLint FIREWORK_PARTICLES = 70;

class Firework
{
	public:
		// Object member properties
		GLfloat x[FIREWORK_PARTICLES];
		GLfloat y[FIREWORK_PARTICLES];
		GLfloat xSpeed[FIREWORK_PARTICLES];
		GLfloat ySpeed[FIREWORK_PARTICLES];

		GLfloat red;
		GLfloat blue;
		GLfloat green;
		GLfloat alpha;

		GLfloat particleSize;
		GLboolean hasExploded;

		static const GLfloat GRAVITY;

		// Object member functions
		Firework(); // Constructor declaration
		void initialize(GLint, GLint);
		void explode();
};

#endif
