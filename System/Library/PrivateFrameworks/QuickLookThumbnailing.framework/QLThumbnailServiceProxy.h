/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLThumbnailsInterface, QLThumbnailAdditionIndexInterface;
@class NSXPCConnection, NSObject;

@interface QLThumbnailServiceProxy : NSObject {

	NSXPCConnection* _connection;
	NSObject*<QLThumbnailsInterface> _proxy;
	NSObject*<QLThumbnailAdditionIndexInterface> _indexProxy;

}
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)askThumbnailAdditionIndex:(/*^block*/id)arg1 ;
-(id)indexProxy;
-(void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2 ;
-(void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2 ;
@end
