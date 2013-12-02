/*
  ==============================================================================

    open_gl_component.h
    Created: 2 Dec 2013 2:04:27pm
    Author:  Chris

  ==============================================================================
*/

#ifndef OPEN_GL_COMPONENT_H_INCLUDED
#define OPEN_GL_COMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class open_gl_component    : public Component,
							 private OpenGLRenderer
{
public:
    open_gl_component();
    ~open_gl_component();

    void paint (Graphics&);
    void resized();

	void newOpenGLContextCreated();
	void renderOpenGL();
	void openGLContextClosing();

private:
	// openGL state
	OpenGLContext open_gl_context;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (open_gl_component)
};


#endif  // OPEN_GL_COMPONENT_H_INCLUDED
