/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDXPCEventListener.h>

@class NSMutableArray, NSString;

@interface CDPDAuthObserver : NSObject <CDPDXPCEventListener> {

	NSMutableArray* _authListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)eventReceived:(const char*)arg1 eventInfo:(id)arg2 ;
-(void)registerListener:(id)arg1 ;
@end

