#include "helloTriangleApplication.hpp"

namespace lve {

	void HelloTriangleApplication::createInstance() {
		VkApplicationInfo appInfo{};
		appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
		appInfo.pApplicationName = "Hello Triangle";
		appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
		appInfo.pEngineName = "No Engine";
		appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
		appInfo.apiVersion = VK_API_VERSION_1_0;

		VkInstanceCreateInfo createInfo{};
		createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
		createInfo.pApplicationInfo = &appInfo;
	}

	void HelloTriangleApplication::initWindow() {
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); //Hints to not create a openGL context
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(WIDTH, HEIGTH, "Vulkan window", nullptr, nullptr);
	}

	void HelloTriangleApplication::initVulkan() {
		createInstance();
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