// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8TestInterfaceEventTarget_h
#define V8TestInterfaceEventTarget_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/V8EventTarget.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "bindings/tests/idls/core/TestInterfaceEventTarget.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8TestInterfaceEventTargetConstructor {
public:
    static v8::Handle<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static const WrapperTypeInfo wrapperTypeInfo;
};

class V8TestInterfaceEventTarget {
public:
    static bool hasInstance(v8::Handle<v8::Value>, v8::Isolate*);
    static v8::Handle<v8::Object> findInstanceInPrototypeChain(v8::Handle<v8::Value>, v8::Isolate*);
    static v8::Handle<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static TestInterfaceEventTarget* toImpl(v8::Handle<v8::Object> object)
    {
        return toImpl(blink::toScriptWrappableBase(object));
    }
    static TestInterfaceEventTarget* toImplWithTypeCheck(v8::Isolate*, v8::Handle<v8::Value>);
    static const WrapperTypeInfo wrapperTypeInfo;
    static void refObject(ScriptWrappableBase* internalPointer);
    static void derefObject(ScriptWrappableBase* internalPointer);
    static WrapperPersistentNode* createPersistentHandle(ScriptWrappableBase* internalPointer);
    static EventTarget* toEventTarget(v8::Handle<v8::Object>);
    static const int eventListenerCacheIndex = v8DefaultWrapperInternalFieldCount + 0;
#if ENABLE(OILPAN)
    static const int persistentHandleIndex = v8DefaultWrapperInternalFieldCount + 1;
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 1 + 1;
#else
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 1;
#endif
    static inline ScriptWrappableBase* toScriptWrappableBase(TestInterfaceEventTarget* impl)
    {
        return impl->toScriptWrappableBase();
    }

    static inline TestInterfaceEventTarget* toImpl(ScriptWrappableBase* internalPointer)
    {
        return internalPointer->toImpl<TestInterfaceEventTarget>();
    }
    static void installConditionallyEnabledProperties(v8::Handle<v8::Object>, v8::Isolate*) { }
    static void installConditionallyEnabledMethods(v8::Handle<v8::Object>, v8::Isolate*) { }

private:
};

inline v8::Handle<v8::Object> wrap(TestInterfaceEventTarget* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return impl->wrap(creationContext, isolate);
}

inline v8::Handle<v8::Value> toV8(TestInterfaceEventTarget* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (UNLIKELY(!impl))
        return v8::Null(isolate);
    v8::Handle<v8::Value> wrapper = DOMDataStore::getWrapper<V8TestInterfaceEventTarget>(impl, isolate);
    if (!wrapper.IsEmpty())
        return wrapper;

    return impl->wrap(creationContext, isolate);
}

template<typename CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, TestInterfaceEventTarget* impl)
{
    if (UNLIKELY(!impl)) {
        v8SetReturnValueNull(callbackInfo);
        return;
    }
    if (DOMDataStore::setReturnValueFromWrapper<V8TestInterfaceEventTarget>(callbackInfo.GetReturnValue(), impl))
        return;
    v8::Handle<v8::Object> wrapper = wrap(impl, callbackInfo.Holder(), callbackInfo.GetIsolate());
    v8SetReturnValue(callbackInfo, wrapper);
}

template<typename CallbackInfo>
inline void v8SetReturnValueForMainWorld(const CallbackInfo& callbackInfo, TestInterfaceEventTarget* impl)
{
    ASSERT(DOMWrapperWorld::current(callbackInfo.GetIsolate()).isMainWorld());
    if (UNLIKELY(!impl)) {
        v8SetReturnValueNull(callbackInfo);
        return;
    }
    if (DOMDataStore::setReturnValueFromWrapperForMainWorld<V8TestInterfaceEventTarget>(callbackInfo.GetReturnValue(), impl))
        return;
    v8::Handle<v8::Value> wrapper = wrap(impl, callbackInfo.Holder(), callbackInfo.GetIsolate());
    v8SetReturnValue(callbackInfo, wrapper);
}

template<class CallbackInfo, class Wrappable>
inline void v8SetReturnValueFast(const CallbackInfo& callbackInfo, TestInterfaceEventTarget* impl, Wrappable* wrappable)
{
    if (UNLIKELY(!impl)) {
        v8SetReturnValueNull(callbackInfo);
        return;
    }
    if (DOMDataStore::setReturnValueFromWrapperFast<V8TestInterfaceEventTarget>(callbackInfo.GetReturnValue(), impl, callbackInfo.Holder(), wrappable))
        return;
    v8::Handle<v8::Object> wrapper = wrap(impl, callbackInfo.Holder(), callbackInfo.GetIsolate());
    v8SetReturnValue(callbackInfo, wrapper);
}

inline v8::Handle<v8::Value> toV8(PassRefPtrWillBeRawPtr<TestInterfaceEventTarget> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl.get(), creationContext, isolate);
}

template<class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, PassRefPtrWillBeRawPtr<TestInterfaceEventTarget> impl)
{
    v8SetReturnValue(callbackInfo, impl.get());
}

template<class CallbackInfo>
inline void v8SetReturnValueForMainWorld(const CallbackInfo& callbackInfo, PassRefPtrWillBeRawPtr<TestInterfaceEventTarget> impl)
{
    v8SetReturnValueForMainWorld(callbackInfo, impl.get());
}

template<class CallbackInfo, class Wrappable>
inline void v8SetReturnValueFast(const CallbackInfo& callbackInfo, PassRefPtrWillBeRawPtr<TestInterfaceEventTarget> impl, Wrappable* wrappable)
{
    v8SetReturnValueFast(callbackInfo, impl.get(), wrappable);
}

} // namespace blink
#endif // V8TestInterfaceEventTarget_h
