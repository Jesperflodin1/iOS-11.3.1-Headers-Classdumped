/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPRequest.h>

@class MPCPlayerPath, MPPropertySet;

@interface MPCPlayerRequest : MPRequest {

	BOOL _disablePlaybackStateValidation;
	MPCPlayerPath* _playerPath;
	MPPropertySet* _playingItemProperties;
	MPPropertySet* _queueSectionProperties;
	MPPropertySet* _queueItemProperties;
	SCD_Struct_MP5 _tracklistRange;

}

@property (nonatomic,retain) MPCPlayerPath * playerPath;                        //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MPPropertySet * playingItemProperties;               //@synthesize playingItemProperties=_playingItemProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueSectionProperties;              //@synthesize queueSectionProperties=_queueSectionProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueItemProperties;                 //@synthesize queueItemProperties=_queueItemProperties - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackStateValidation;               //@synthesize disablePlaybackStateValidation=_disablePlaybackStateValidation - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP5 tracklistRange;                     //@synthesize tracklistRange=_tracklistRange - In the implementation block
+(Class)responseClass;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)middlewareClasses;
-(void)setTracklistRange:(SCD_Struct_MP5)arg1 ;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(void)setPlayingItemProperties:(MPPropertySet *)arg1 ;
-(void)setQueueItemProperties:(MPPropertySet *)arg1 ;
-(void)setDisablePlaybackStateValidation:(BOOL)arg1 ;
-(SCD_Struct_MP5)tracklistRange;
-(MPCPlayerPath *)playerPath;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(void)setQueueSectionProperties:(MPPropertySet *)arg1 ;
-(BOOL)disablePlaybackStateValidation;
-(id)performWithCompletion:(/*^block*/id)arg1 ;
@end

