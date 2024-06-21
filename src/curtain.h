/**************************************************************************/
/*  curtain.h                                                             */
/**************************************************************************/


#ifndef CURTAIN_H
#define CURTAIN_H

#include "scene/2d/node_2d.h"

class Curtain : public Node2D {
	GDCLASS(Curtain, Node2D);

	Color color;

protected:
	void _notification(int p_what);
	static void _bind_methods();

public:
	void set_frame_color(const Color &p_color);
	Color get_frame_color() const;

    Curtain();
    ~Curtain();
};

#endif // CURTAIN_H
