//// Glad includes required OpenGL headers like GL/gl.h
//// Be sure to include Glad before other headers files that require OpenGL like glfw3
//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//
//#include <iostream>
//
//
//int main(void) {
//
//	// This function initializes the GLFW library before most GLFW functions can be used GLFW needs to be initialized
//	glfwInit();
//	// Setting the GLFW hints for configuration
//	// Set the major and minor version for OpenGL to 3
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	// Telling GLFW we want to exclusively use the core profile
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//	// Create a window object that will hold all the windowing data
//	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
//	if (window == NULL) {
//		std::cout << "Failed to create GLFW window" << std::endl;
//		glfwTerminate();
//		return -1;
//	}
//	// Make the context of our window the main context on the current thread
//	glfwMakeContextCurrent(window);
//	// Glad manages function pointers for OpenGL
//	// 
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "Falied to initialize GLAD" << std::endl;
//		return -1;
//	}
//	return 0;
//}