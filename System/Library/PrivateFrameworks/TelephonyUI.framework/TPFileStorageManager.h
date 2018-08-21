/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface TPFileStorageManager : NSObject {

	BOOL _hasClearedLegacyStorage;
	NSURL* _urlForFileSystem;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL hasClearedLegacyStorage;                    //@synthesize hasClearedLegacyStorage=_hasClearedLegacyStorage - In the implementation block
@property (nonatomic,readonly) NSURL * urlForFileSystem;                      //@synthesize urlForFileSystem=_urlForFileSystem - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)urlForFileSystem;
-(void)clearLegacyStorageIfNecessary;
-(BOOL)hasClearedLegacyStorage;
-(id)urlsForLegacyFileSystem;
-(void)deleteStorageAtURLs:(id)arg1 ;
-(void)setHasClearedLegacyStorage:(BOOL)arg1 ;
-(void)saveImage:(id)arg1 withName:(id)arg2 ;
-(id)imageWithName:(id)arg1 ;
-(void)localeChanged;
@end

