/**************************************************************************/
/*  curtain.cpp                                                        */
/**************************************************************************/


#include "curtain.h"

void Curtain::set_frame_color(const Color &p_color) {
	color = p_color;
	update();
}

Color Curtain::get_frame_color() const {
	return color;
}

void Curtain::_notification(int p_what) {
	if (p_what == NOTIFICATION_DRAW) {
        Size2 size = get_viewport_rect().size;
        draw_rect(Rect2(Point2(), size), color);
	}
}

void Curtain::_bind_methods() {
	ClassDB::bind_method(D_METHOD("set_frame_color", "color"), &Curtain::set_frame_color);
	ClassDB::bind_method(D_METHOD("get_frame_color"), &Curtain::get_frame_color);

	ADD_PROPERTY(PropertyInfo(Variant::COLOR, "color"), "set_frame_color", "get_frame_color");
}

Curtain::Curtain() {
	color = Color(1, 1, 1);
}

Curtain::~Curtain() {
}
