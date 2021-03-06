/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPCPlayerResponse, MPSectionedCollection, NSIndexPath, MPCPlayerResponseItem;

@interface MPCPlayerResponseTracklist : NSObject {

	NSString* _uniqueIdentifier;
	long long _lastChangeDirection;
	long long _upNextItemCount;
	long long _repeatType;
	long long _shuffleType;
	MPCPlayerResponse* _response;
	MPSectionedCollection* _items;
	NSIndexPath* _playingItemIndexPath;
	long long _playingItemGlobalIndex;
	long long _globalItemCount;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * items;                   //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * playingItemIndexPath;              //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (nonatomic,readonly) long long playingItemGlobalIndex;                     //@synthesize playingItemGlobalIndex=_playingItemGlobalIndex - In the implementation block
@property (nonatomic,readonly) long long globalItemCount;                            //@synthesize globalItemCount=_globalItemCount - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long lastChangeDirection;                        //@synthesize lastChangeDirection=_lastChangeDirection - In the implementation block
@property (nonatomic,readonly) long long upNextItemCount;                            //@synthesize upNextItemCount=_upNextItemCount - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseItem * playingItem; 
@property (nonatomic,readonly) long long repeatType;                                 //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) long long shuffleType;                                //@synthesize shuffleType=_shuffleType - In the implementation block
-(id)initWithResponse:(id)arg1 ;
-(MPCPlayerResponse *)response;
-(MPSectionedCollection *)items;
-(NSString *)uniqueIdentifier;
-(long long)repeatType;
-(long long)shuffleType;
-(id)repeatCommand;
-(id)shuffleCommand;
-(NSIndexPath *)playingItemIndexPath;
-(long long)playingItemGlobalIndex;
-(id)insertCommand;
-(id)resetCommand;
-(id)changeItemCommand;
-(MPCPlayerResponseItem *)playingItem;
-(long long)globalItemCount;
-(id)disableModificationsCommand;
-(long long)upNextItemCount;
-(id)reorderCommand;
-(long long)lastChangeDirection;
@end

