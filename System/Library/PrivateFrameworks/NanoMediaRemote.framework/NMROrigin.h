/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMROriginMediaRemoteObserverNotificationHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber;

@interface NMROrigin : NSObject <NMROriginMediaRemoteObserverNotificationHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	void* _mediaRemoteOrigin;
	void* _deviceInfo;

}

@property (nonatomic,readonly) void* mediaRemoteOrigin; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) int originType; 
@property (nonatomic,readonly) NSNumber * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) void* deviceInfo; 
+(void*)_originFromNotification:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLocal;
-(NSString *)displayName;
-(NSNumber *)uniqueIdentifier;
-(BOOL)updateDeviceInfo:(void*)arg1 ;
-(void*)deviceInfo;
-(void*)mediaRemoteOrigin;
-(id)initWithMROriginRef:(void*)arg1 ;
-(void)updateWithMROrigin:(void*)arg1 ;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(int)originType;
@end
