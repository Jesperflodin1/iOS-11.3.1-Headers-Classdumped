/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSVirtualMachine, JSWrapperMap, JSValue, NSString;

@interface JSContext : NSObject {

	JSVirtualMachine* m_virtualMachine;
	OpaqueJSContextRef m_context;
	Strong<JSC::JSObject>* m_exception;
	/*^block*/id _exceptionHandler;

}

@property (retain,readonly) JSWrapperMap * wrapperMap; 
@property (readonly) JSValue * globalObject; 
@property (retain) JSValue * exception; 
@property (copy) id exceptionHandler;                                //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (readonly) JSVirtualMachine * virtualMachine; 
@property (copy) NSString * name; 
+(id)currentCallee;
+(id)currentContext;
+(id)currentArguments;
+(id)contextWithJSGlobalContextRef:(OpaqueJSContextRef)arg1 ;
+(id)currentThis;
-(void)setException:(JSValue *)arg1 ;
-(JSValue *)exception;
-(id)initWithGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(void)ensureWrapperMap;
-(JSWrapperMap *)wrapperMap;
-(BOOL)_remoteInspectionEnabled;
-(BOOL)_includesNativeCallStackWhenReportingExceptions;
-(void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1 ;
-(CFRunLoopRef)_debuggerRunLoop;
-(void)notifyException:(OpaqueJSValueRef)arg1 ;
-(BOOL)boolFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)beginCallbackWithData:(CallbackData*)arg1 calleeValue:(OpaqueJSValueRef)arg2 thisValue:(OpaqueJSValueRef)arg3 argumentCount:(unsigned long long)arg4 arguments:(const OpaqueJSValue*)arg5 ;
-(void)endCallbackWithData:(CallbackData*)arg1 ;
-(id)wrapperForObjCObject:(id)arg1 ;
-(id)wrapperForJSObject:(OpaqueJSValueRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)_setDebuggerRunLoop:(CFRunLoopRef)arg1 ;
-(void)_setRemoteInspectionEnabled:(BOOL)arg1 ;
-(id)evaluateScript:(id)arg1 withSourceURL:(id)arg2 ;
-(id)exceptionHandler;
-(OpaqueJSContextRef)JSGlobalContextRef;
-(JSValue *)globalObject;
-(id)evaluateScript:(id)arg1 ;
-(JSVirtualMachine *)virtualMachine;
-(id)valueFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)setExceptionHandler:(id)arg1 ;
-(id)initWithVirtualMachine:(id)arg1 ;
@end
