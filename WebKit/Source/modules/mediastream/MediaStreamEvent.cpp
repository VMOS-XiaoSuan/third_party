/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "modules/mediastream/MediaStreamEvent.h"

namespace blink {

MediaStreamEventInit::MediaStreamEventInit()
    : stream(nullptr)
{
}

PassRefPtrWillBeRawPtr<MediaStreamEvent> MediaStreamEvent::create()
{
    return adoptRefWillBeNoop(new MediaStreamEvent);
}

PassRefPtrWillBeRawPtr<MediaStreamEvent> MediaStreamEvent::create(const AtomicString& type, bool canBubble, bool cancelable, MediaStream* stream)
{
    return adoptRefWillBeNoop(new MediaStreamEvent(type, canBubble, cancelable, stream));
}

PassRefPtrWillBeRawPtr<MediaStreamEvent> MediaStreamEvent::create(const AtomicString& type, const MediaStreamEventInit& initializer)
{
    return adoptRefWillBeNoop(new MediaStreamEvent(type, initializer));
}

MediaStreamEvent::MediaStreamEvent()
{
}

MediaStreamEvent::MediaStreamEvent(const AtomicString& type, bool canBubble, bool cancelable, MediaStream* stream)
    : Event(type, canBubble, cancelable)
    , m_stream(stream)
{
}

MediaStreamEvent::MediaStreamEvent(const AtomicString& type, const MediaStreamEventInit& initializer)
    : Event(type, initializer)
    , m_stream(initializer.stream)
{
}

MediaStreamEvent::~MediaStreamEvent()
{
}

MediaStream* MediaStreamEvent::stream() const
{
    return m_stream.get();
}

MediaStream* MediaStreamEvent::stream(bool& isNull) const
{
    isNull = !m_stream;
    return m_stream.get();
}

const AtomicString& MediaStreamEvent::interfaceName() const
{
    return EventNames::MediaStreamEvent;
}

void MediaStreamEvent::trace(Visitor* visitor)
{
    visitor->trace(m_stream);
    Event::trace(visitor);
}

} // namespace blink

