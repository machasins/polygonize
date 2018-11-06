/******************************************************************************/
/*!
\file   taskbar.cpp
\author Michael Kinyon
\par    Project: Polygonize
\date   11/05/18
\brief
	Implements the task bar and all it's functionality.
*/
/******************************************************************************/

/* INCLUDE FILES */

#include "taskbar.hpp"

/* DEFINES */

/* CONSTANTS */

/* FUNCTIONS */

/**************************************************************************/
/*!
  \brief
	  Summary

  \param name
	  Summary

  \return
	  Summary
*/
/**************************************************************************/
void taskbar::Update()
{
	BeginMainMenuBar();

	if (BeginMenu("File"))
	{
		Button("Hi");

		EndMenu();
	}

	EndMainMenuBar();
}
