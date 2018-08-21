/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/StorageSettings.bundle/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface STMediaCache : NSObject {

	NSDictionary* _mediaDict;
	NSMutableDictionary* _mediaGroupsByKind;
	NSMutableDictionary* _mediaCache;

}

@property (nonatomic,retain) NSMutableDictionary * mediaCache;              //@synthesize mediaCache=_mediaCache - In the implementation block
+(id)sharedCache;
+(long long)artworkSize;
+(long long)downloadSize;
-(id)mediaTypesForIdentifier:(id)arg1 ;
-(id)cacheItemForQuery:(id)arg1 withGroupingType:(long long)arg2 ;
-(NSMutableDictionary *)mediaCache;
-(id)mediaCollectionForKey:(id)arg1 ;
-(id)mediaSpecifiersForIdentifier:(id)arg1 ;
-(id)mediaSpecifiersForApp:(id)arg1 ;
-(void)setMediaCache:(NSMutableDictionary *)arg1 ;
-(id)mediaTypesForStorageApp:(id)arg1 ;
-(void)removeMediaCollectionCacheForKey:(id)arg1 ;
-(void)reload;
-(id)size:(id)arg1 ;
@end

