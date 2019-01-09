#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	printf("Window resized to %dx%d\n", width, height);
	glViewport(0, 0, width, height);
}

void processInput(GLFWwindow *window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		printf("You tried to escape you MF!\n");
		glfwSetWindowShouldClose(window, 1);
	}
}

double getRandomNumber(int max) { return rand() % max; }

int main(int argc, char const *argv[])
{
	srand(time(0));

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
	if (window == NULL) {
		fprintf(stderr, "Failed to create GLFW window\n");
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		fprintf(stderr, "Failed to init GLAD, I am certain you are not glad!\n");
		return -1;
	}

	glViewport(0, 0, 800, 600);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	// start with random numbers
	double r = getRandomNumber(10) / 10;
	double g = getRandomNumber(10) / 10;
	double b = getRandomNumber(10) / 10;

	while (!glfwWindowShouldClose(window)) {
		processInput(window);

		// rendering commands will go in here
		glClearColor(r, g, b, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		if (r <= 0.98) r += 0.01;
		if (g <= 0.98) g += 0.01;
		if (b <= 0.98) b += 0.01;

		glfwSwapBuffers(window);
		// does it ask window to just poll events? Or will it do something else too?
		glfwPollEvents(); // we can add call backs to events like we do in javascript.
	}

	glfwTerminate();
	printf("all iz well!\n");
	return 0;
}
