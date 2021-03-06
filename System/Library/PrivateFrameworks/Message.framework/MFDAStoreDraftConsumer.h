/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDASyncResponseConsumer.h>

@class NSString, MFError;

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer> {

	BOOL _success;
	NSString* _serverId;
	MFError* _error;

}

@property (nonatomic,readonly) NSString * serverId;              //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,readonly) MFError * error;                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL success;                     //@synthesize success=_success - In the implementation block
-(void)dealloc;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(NSString *)serverId;
-(BOOL)success;
-(MFError *)error;
@end

