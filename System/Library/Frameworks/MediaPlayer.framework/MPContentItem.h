/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject {

	void* _mediaRemoteContentItem;
	MPMediaItemArtwork* _artwork;

}

@property (nonatomic,readonly) void* _mediaRemoteContentItem;                              //@synthesize mediaRemoteContentItem=_mediaRemoteContentItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) MPMediaItemArtwork * artwork;                                 //@synthesize artwork=_artwork - In the implementation block
@property (assign,nonatomic) float playbackProgress; 
@property (assign,getter=isStreamingContent,nonatomic) BOOL streamingContent; 
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent; 
@property (assign,getter=isContainer,nonatomic) BOOL container; 
@property (assign,getter=isPlayable,nonatomic) BOOL playable; 
+(void)performSuppressingChangeNotifications:(/*^block*/id)arg1 ;
+(BOOL)shouldPushArtworkData;
+(BOOL)isSuppressingChangeNotifications;
-(MPMediaItemArtwork *)artwork;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setContainer:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setPlayable:(BOOL)arg1 ;
-(void)setExplicitContent:(BOOL)arg1 ;
-(BOOL)isExplicitContent;
-(float)playbackProgress;
-(void*)_mediaRemoteContentItem;
-(id)_initWithMediaRemoteContentItem:(void*)arg1 ;
-(void)_postItemChangedNotificationWithDeltaBlock:(/*^block*/id)arg1 ;
-(id)createExternalRepresentation;
-(BOOL)isContainer;
-(BOOL)isStreamingContent;
-(void)_loadArtwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithExternalRepresentation:(id)arg1 ;
-(void)setPlaybackProgress:(float)arg1 ;
-(void)setStreamingContent:(BOOL)arg1 ;
-(BOOL)isPlayable;
@end
