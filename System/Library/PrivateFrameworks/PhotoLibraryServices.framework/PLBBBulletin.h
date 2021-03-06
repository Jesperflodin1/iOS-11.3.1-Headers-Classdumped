/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet, NSDate, NSArray, NSDictionary;

@interface PLBBBulletin : NSObject {

	long long _bulletinType;
	NSString* _senderName;
	NSString* _senderEmailAddress;
	NSString* _albumTitle;
	NSString* _photosBatchID;
	NSString* _mainAssetUUID;
	BOOL _mainAssetIsMine;
	BOOL _mainAssetIsVideo;
	BOOL _containsBatchFirstKnownAsset;
	NSMutableSet* _assetUUIDs;
	long long _assetCount;
	NSMutableSet* _placeholderAssetUUIDs;
	NSMutableSet* _lowResThumbAssetUUIDs;
	int _invitationState;
	NSString* _firstCommentGUID;
	NSDate* _commentDate;
	NSString* _commentText;
	long long _commentCount;
	BOOL _commentIsCaption;
	BOOL _suppressAlert;
	NSMutableSet* _senderNames;
	BOOL _forMultipleAsset;
	BOOL _allMultipleAssetIsMine;
	BOOL _isMixedType;
	BOOL _offerToReportAsJunk;
	NSString* _interestingMemoryUUID;
	NSString* _interestingMemoryNotificationTitle;
	NSString* _interestingMemoryNotificationSubtitle;
	unsigned long long _recordID;
	unsigned long long _replacedBulletinRecordID;
	unsigned long long _originalRecordID;
	NSString* _albumUUID;
	NSString* _albumCloudGUID;
	NSDate* _date;
	NSDate* _originalDate;
	NSDate* _expirationDate;
	NSDate* _importantMemoryNotificationDeliveryDate;

}

@property (readonly) long long bulletinType;                                    //@synthesize bulletinType=_bulletinType - In the implementation block
@property (assign) unsigned long long recordID;                                 //@synthesize recordID=_recordID - In the implementation block
@property (assign) unsigned long long replacedBulletinRecordID;                 //@synthesize replacedBulletinRecordID=_replacedBulletinRecordID - In the implementation block
@property (assign) unsigned long long originalRecordID;                         //@synthesize originalRecordID=_originalRecordID - In the implementation block
@property (copy,readonly) NSString * albumUUID;                                 //@synthesize albumUUID=_albumUUID - In the implementation block
@property (copy,readonly) NSString * albumCloudGUID;                            //@synthesize albumCloudGUID=_albumCloudGUID - In the implementation block
@property (copy,readonly) NSString * mainAssetUUID;                             //@synthesize mainAssetUUID=_mainAssetUUID - In the implementation block
@property (copy,readonly) NSString * senderEmailAddress;                        //@synthesize senderEmailAddress=_senderEmailAddress - In the implementation block
@property (readonly) NSString * title; 
@property (readonly) NSString * message; 
@property (copy,readonly) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (copy) NSDate * originalDate;                                         //@synthesize originalDate=_originalDate - In the implementation block
@property (copy,readonly) NSDate * expirationDate;                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) NSString * destinationURLString; 
@property (readonly) BOOL hasThumbnail; 
@property (readonly) NSArray * suppressionContexts; 
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) BOOL canMergeWithPersistedBulletins; 
@property (readonly) BOOL allAssetsAreFullResolution; 
@property (readonly) BOOL thumbnailAssetIsPlaceholder; 
@property (readonly) double completionPercentage; 
@property (assign) BOOL suppressAlert;                                          //@synthesize suppressAlert=_suppressAlert - In the implementation block
@property (copy) NSDate * importantMemoryNotificationDeliveryDate;              //@synthesize importantMemoryNotificationDeliveryDate=_importantMemoryNotificationDeliveryDate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)title;
-(NSDate *)date;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)message;
-(NSDate *)expirationDate;
-(unsigned long long)recordID;
-(BOOL)hasThumbnail;
-(NSString *)albumCloudGUID;
-(id)initWithInvitationAlbum:(id)arg1 ;
-(id)initWithInvitationRecordStatusChanged:(id)arg1 ;
-(id)initWithMultipleContributorEnabledForAlbum:(id)arg1 ;
-(id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3 ;
-(id)initWithCommentAdded:(id)arg1 ;
-(NSString *)mainAssetUUID;
-(id)initWithLikeAdded:(id)arg1 ;
-(id)initWithInterestingMemoryNotificationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
-(void)setImportantMemoryNotificationDeliveryDate:(NSDate *)arg1 ;
-(unsigned long long)replacedBulletinRecordID;
-(long long)bulletinType;
-(BOOL)isCommentPiggyBackedOnPhotosAddedBulletin;
-(unsigned long long)originalRecordID;
-(void)setOriginalRecordID:(unsigned long long)arg1 ;
-(BOOL)canMergeWithPersistedBulletins;
-(id)bulletinByMergingWithBulletinDictionary:(id)arg1 ;
-(id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletin:(id)arg2 ;
-(void)setReplacedBulletinRecordID:(unsigned long long)arg1 ;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(void)setSuppressAlert:(BOOL)arg1 ;
-(id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 ;
-(id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 senderNames:(id)arg14 forMultipleAsset:(BOOL)arg15 allMultipleAssetIsMine:(BOOL)arg16 isMixedType:(BOOL)arg17 ;
-(NSDate *)originalDate;
-(id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletinDictionary:(id)arg2 ;
-(id)_localizedCountFormatter;
-(NSString *)destinationURLString;
-(NSArray *)suppressionContexts;
-(id)bulletinByMergingWithBulletin:(id)arg1 ;
-(BOOL)allAssetsAreFullResolution;
-(BOOL)thumbnailAssetIsPlaceholder;
-(double)completionPercentage;
-(BOOL)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3 ;
-(BOOL)suppressAlert;
-(NSDate *)importantMemoryNotificationDeliveryDate;
-(NSString *)albumUUID;
-(id)_initWithType:(long long)arg1 ;
-(NSString *)senderEmailAddress;
-(void)setRecordID:(unsigned long long)arg1 ;
@end

