#pragma once

#define GLFW_INCLUDE_VULKAN
#include<GLFW/glfw3.h>

#include<iostream>
#include<string>

namespace lve {
	class LveWindow {

	public:
		LveWindow(int w, int h, std::string name);
		~LveWindow();

		LveWindow(const LveWindow&) = delete;
		LveWindow &operator=(const LveWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); };

	private:

		void initWindow();

		const int width;
		const int height;

		const std::string windowName;

		GLFWwindow* window;
	};
}