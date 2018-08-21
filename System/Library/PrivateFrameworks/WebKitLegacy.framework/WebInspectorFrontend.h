/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebInspectorFrontend : NSObject {

	WebInspectorFrontendClient* m_frontendClient;

}
-(void)showConsole;
-(BOOL)isDebuggingEnabled;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(BOOL)isTimelineProfilingEnabled;
-(void)setTimelineProfilingEnabled:(BOOL)arg1 ;
-(BOOL)isProfilingJavaScript;
-(id)initWithFrontendClient:(WebInspectorFrontendClient*)arg1 ;
-(void)startProfilingJavaScript;
-(void)stopProfilingJavaScript;
-(void)close;
-(void)detach;
-(void)attach;
@end
