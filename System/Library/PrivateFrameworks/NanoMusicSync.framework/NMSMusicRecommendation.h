/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class MPModelObject, NSArray, NSString, NSDate, MPArtworkCatalog, NSObject;

@interface NMSMusicRecommendation : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	NSArray* _storeRecommendationModelObjects;
	NSString* _subtitle;
	NSDate* _lastModifiedDate;
	MPArtworkCatalog* _artworkCatalog;
	NSObject*<OS_dispatch_queue> _serializerQueue;
	BOOL _selected;
	NSString* _identifier;
	NSString* _storeRecommendationID;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * storeRecommendationID;                       //@synthesize storeRecommendationID=_storeRecommendationID - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) BOOL referencesOnlyLibraryContainers; 
@property (nonatomic,readonly) BOOL isHeavyRotation; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
@property (nonatomic,readonly) NSArray * storeRecommendationModelObjects; 
+(id)_missingArtImage;
+(void)_fillArtworkMutableArray:(id)arg1 toCount:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_commonInit;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)subtitle;
-(NSDate *)lastModifiedDate;
-(MPArtworkCatalog *)artworkCatalog;
-(NSString *)storeRecommendationID;
-(BOOL)isHeavyRotation;
-(NSArray *)storeRecommendationModelObjects;
-(BOOL)referencesOnlyLibraryContainers;
-(id)initWithRecommendationGroup:(id)arg1 ;
-(id)initWithPlaylist:(id)arg1 recommendationGroup:(id)arg2 ;
-(id)initLibraryRecommendation;
-(id)_tiledArtworkRequestForPlaylists:(id)arg1 albums:(id)arg2 ;
-(id)_artworkCatalogsForLibraryRecommendationAlbumsWithCount:(unsigned long long)arg1 ;
-(id)_artworkCatalogsForLibraryRecommendationPlaylistsWithCount:(unsigned long long)arg1 ;
@end

