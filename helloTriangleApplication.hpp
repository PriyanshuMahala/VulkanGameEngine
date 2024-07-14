#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>


namespace lve {
	const uint32_t WIDTH = 800;
	const uint32_t HEIGTH = 600;

	class HelloTriangleApplication {
	private:
		GLFWwindow* window = nullptr;

		void initWindow();
		void initVulkan();
		void mainLoop();
		void cleanup();
	
	public:

		void run() {
			initWindow();
			mainLoop();
			cleanup();
		}

	
	};
}