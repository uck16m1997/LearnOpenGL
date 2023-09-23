// Glad includes required OpenGL headers like GL/gl.h
// Be sure to include Glad before other headers files that require OpenGL like glfw3
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);

int main (void) {

	// This function initializes the GLFW library before most GLFW functions can be used GLFW needs to be initialized
	glfwInit();
	// Setting the GLFW hints for configuration
	// Set the major and minor version for OpenGL to 3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Telling GLFW we want to exclusively use the core profile
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a window object that will hold all the windowing data
	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Make the context of our window the main context on the current thread
	glfwMakeContextCurrent(window);
	// Glad manages function pointers for OpenGL
	// 
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Falied to initialize GLAD" << std::endl;
		return -1;
	}
	// We have to tell OpenGL the size of the rendering window 
	// So OpenGL knows how we want to display the data and coordinates with respect to the window
	// 0,0 are lower left corner and 800,600 are width and height
	// We could actually set the viewport dimensions at values smaller than GLFW's dimensions; 
	// Then all the OpenGL rendering would be displayed in a smaller window and we could  display other elements outside the OpenGL viewport.
	glViewport(0, 0, 800, 600);
	return 0;
}


// A callback function on the window that gets called each time the window is resized to adjust the viewport as well. 
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}