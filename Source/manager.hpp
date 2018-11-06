/******************************************************************************/
/*!
\file   manager.hpp
\author Michael Kinyon
\par    Project: Polygonize
\date   11/05/18
\brief
	Declares the manager class.
*/
/******************************************************************************/

#pragma once

/* INCLUDE FILES */
#include <SDL/SDL.h>

#include "imgui/imgui.h"
#include "imgui/imgui_impl_sdl.h"
#include "imgui/imgui_impl_opengl3.h"

#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/glew.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif

/* DEFINES */

/* CONSTANTS */

/* CLASSES */
/// managers the program
class manager
{
public:
	static int Init();		/// initializes the program

	static bool Handler();	/// the main loop of the program
	static void Update();	/// the updating of the program
	static void Render();	/// the rendering of objects

	static void Shutdown();	/// destroyes the program
private:
	static SDL_Window* window;
	static SDL_GLContext gl_context;

	static ImGuiIO* io;


};