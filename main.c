#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// can it work without lgfw?
	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	printf("all iz well!\n");
	return 0;
}
