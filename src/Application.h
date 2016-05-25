// Copyright (C) 2016 Elviss Strazdins

#pragma once

class Application: public ouzel::Noncopyable
{
public:
    virtual ~Application();

    void begin();

    bool handleKeyboard(ouzel::Event::Type type, const ouzel::KeyboardEvent& event, const ouzel::VoidPtr& sender) const;
    bool handleMouse(ouzel::Event::Type type, const ouzel::MouseEvent& event, const ouzel::VoidPtr& sender) const;
    bool handleTouch(ouzel::Event::Type type, const ouzel::TouchEvent& event, const ouzel::VoidPtr& sender) const;
    bool handleGamepad(ouzel::Event::Type type, const ouzel::GamepadEvent& event, const ouzel::VoidPtr& sender) const;
    bool handleUI(ouzel::Event::Type type, const ouzel::UIEvent& event, const ouzel::VoidPtr& sender) const;

protected:
    ouzel::scene::LayerPtr layer;

    ouzel::EventHandlerPtr eventHandler;
};
