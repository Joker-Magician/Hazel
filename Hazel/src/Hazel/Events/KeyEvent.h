#pragma once

#include "Event.h"

#include <sstream>

namespace Hazel {

	class HAZEL_API KeyEvent : public Event
	{
	public :
		inline int GetKeyCode const { return m_KeyCode; }

		EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)
	protected:
		KeyEvent(int keycode)
			: m_KeyCode(keycode) { }

		int m_KeyCode;
	};
}