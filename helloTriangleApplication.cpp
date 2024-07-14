#include "helloTriangleApplication.hpp"

namespace lve {

	void HelloTriangleApplication::initWindow() {
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); //Hints to not create a openGL context
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); 


		window = glfwCreateWindow(WIDTH, HEIGTH, "Vulkan window", nullptr, nullptr);

	}

	void HelloTriangleApplication::mainLoop() {
		while (!(glfwWindowShouldClose(window))) {
			glfwPollEvents();
		}
	}
	
	void HelloTriangleApplication::cleanup() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}
}