/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/BulletinBoardPlugins/PhotoLibraryDataProvider.bundle/PhotoLibraryDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryDataProvider/PhotoLibraryDataProvider-Structs.h>
#import <libobjc.A.dylib/PLButtinBoardDelayedNotificationPostingServiceDelegate.h>
#import <libobjc.A.dylib/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSArray, NSMutableArray, NSObject, PLBulletinBoardPersistentTimer, NSString;

@interface PLBulletinBoardDataProvider : NSObject <PLButtinBoardDelayedNotificationPostingServiceDelegate, BBDataProvider> {

	NSArray* _bulletins;
	NSMutableArray* _bulletinThumbnailData;
	NSObject*<OS_dispatch_queue> _serialQueue;
	long long _lastDisplayedRecordID;
	PLBulletinBoardPersistentTimer* _persistentTimer;

}

@property (nonatomic,retain) NSArray * bulletins;                   //@synthesize bulletins=_bulletins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGImageRef)_newImageByScalingAndCroppingImage:(CGImageRef)arg1 withConstraints:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(void)postBulletinsImmediately:(id)arg1 ;
-(NSArray *)bulletins;
-(void)setBulletins:(NSArray *)arg1 ;
-(id)_bulletinFromDictionary:(id)arg1 isOriginal:(BOOL*)arg2 ;
-(id)_discardedBulletinsFromCurrentBulletins:(id)arg1 ;
-(void)_updateLastDisplayedBulletinRecordID:(long long)arg1 ;
-(void)_updateImageDataCache:(id)arg1 ;
-(id)_imageDataForRecordID:(long long)arg1 ;
-(id)_publisherIDStringFromDictionary:(id)arg1 ;
-(id)_defaultActionFromDictionary:(id)arg1 ;
-(unsigned)_createSoundForPath:(id)arg1 ;
-(void)_bulletinsChanged;
-(void)_applicationBadgeCountChanged;
-(void)_scheduleImportantMemoryBulletinWithDelay;
-(id)sectionIdentifier;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
@end

