/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class MPModelRequest, MPIdentifierSet, NSDictionary;

@interface MPModelPlaybackContext : MPPlaybackContext {

	id _playbackRequestEnvironment;
	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;
	NSDictionary* _startTimeModifications;
	NSDictionary* _endTimeModifications;
	NSDictionary* _assetStoreFronts;

}

@property (nonatomic,copy) id playbackRequestEnvironment;                       //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (nonatomic,copy) MPModelRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;              //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * startTimeModifications;               //@synthesize startTimeModifications=_startTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * endTimeModifications;                 //@synthesize endTimeModifications=_endTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * assetStoreFronts;                     //@synthesize assetStoreFronts=_assetStoreFronts - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
+(id)requiredPropertiesForStaticMediaClips;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(id)init;
-(MPModelRequest *)request;
-(NSDictionary *)startTimeModifications;
-(void)setStartTimeModifications:(NSDictionary *)arg1 ;
-(NSDictionary *)endTimeModifications;
-(void)setEndTimeModifications:(NSDictionary *)arg1 ;
-(NSDictionary *)assetStoreFronts;
-(void)setAssetStoreFronts:(NSDictionary *)arg1 ;
-(id)playbackRequestEnvironment;
-(void)setPlaybackRequestEnvironment:(id)arg1 ;
-(MPIdentifierSet *)startItemIdentifiers;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
@end

