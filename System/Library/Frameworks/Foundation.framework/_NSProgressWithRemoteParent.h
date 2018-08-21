/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress {

	NSXPCConnection* _parentConnection;
	unsigned long long _sequence;

}

@property (retain) NSXPCConnection * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
@property (assign) unsigned long long sequence;                     //@synthesize sequence=_sequence - In the implementation block
-(void)setParentConnection:(NSXPCConnection *)arg1 ;
-(void)_updateFractionCompleted:(id)arg1 ;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3 ;
-(NSXPCConnection *)parentConnection;
-(void)dealloc;
-(void)setSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequence;
@end
