/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@interface JSObjCClassInfo : NSObject {

	Class m_class;
	BOOL m_block;
	OpaqueJSClass* m_classRef;
	Weak<JSC::JSObject>* m_prototype;
	Weak<JSC::JSObject>* m_constructor;

}
-(JSObject*)prototypeInContext:(id)arg1 ;
-(pair<JSC::JSObject *, JSC::JSObject *>*)allocateConstructorAndPrototypeInContext:(id)arg1 ;
-(id)initForClass:(Class)arg1 ;
-(JSObject*)wrapperForObject:(id)arg1 inContext:(id)arg2 ;
-(JSObject*)constructorInContext:(id)arg1 ;
-(void)dealloc;
@end

