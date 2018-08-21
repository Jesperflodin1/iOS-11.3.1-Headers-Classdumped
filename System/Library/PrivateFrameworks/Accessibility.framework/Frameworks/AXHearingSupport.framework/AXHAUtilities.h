/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface AXHAUtilities : NSObject {

	NSDictionary* _pickableRoutes;
	NSObject*<OS_dispatch_queue> _routingQueue;

}
+(id)sharedUtilityProvider;
+(id)dictionaryFromXPCMessage:(id)arg1 error:(id*)arg2 ;
+(id)objectFromXDCObject:(id)arg1 ;
+(id)XDCObjectFromObject:(id)arg1 ;
+(id)copyXPCMessageFromDictionary:(id)arg1 inReplyToXPCMessage:(id)arg2 error:(id*)arg3 ;
+(id)messagePayloadFromDictionary:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)registerNotifications;
-(void)clearAudioRoutes;
-(id)currentPickableAudioRoutes;
-(BOOL)hearingAidRouteAvailable;
-(BOOL)hearingAidStreamSelected;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(void)mediaServerDied;
-(BOOL)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2 ;
@end

