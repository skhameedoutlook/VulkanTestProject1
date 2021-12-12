#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"
#include <iostream>

namespace lve {
	class FirstApp {

	public:
		static const int WIDTH = 800;
		static const int HEIGHT = 600;

		void run();

	private:
		LveWindow lveWindow = LveWindow(WIDTH, HEIGHT, "Test Vulkan Window 1");
		const std::string vertFilepath = "C:\\Users\\lapowner\\source\\repos\\VulkanTestProject1\\shaders\\simple_shader.vert.spv";
		const std::string fragFilepath = "C:\\Users\\lapowner\\source\\repos\\VulkanTestProject1\\shaders\\simple_shader.frag.spv";
		LvePipeline lvePipeline = LvePipeline(vertFilepath, fragFilepath);
	};
}
