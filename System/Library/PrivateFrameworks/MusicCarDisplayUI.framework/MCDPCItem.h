/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCDPCModel, NSString, NSData, UIImage;

@interface MCDPCItem : NSObject {

	void* _contentItem;
	BOOL _currentlyPlaying;
	MCDPCModel* _model;

}

@property (nonatomic,__weak,readonly) MCDPCModel * model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) void* contentItem;                        //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                    //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSData * artworkData; 
@property (nonatomic,readonly) float playbackProgress; 
@property (nonatomic,readonly) BOOL isPlayable; 
@property (nonatomic,readonly) BOOL isContainer; 
@property (nonatomic,readonly) BOOL isCloudItem; 
@property (nonatomic,readonly) BOOL isExplicitItem; 
@property (nonatomic,readonly) UIImage * artworkImage; 
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(MCDPCModel *)model;
-(NSString *)subtitle;
-(void*)contentItem;
-(BOOL)isCloudItem;
-(float)playbackProgress;
-(BOOL)isExplicitItem;
-(NSData *)artworkData;
-(BOOL)isContainer;
-(BOOL)isPlayable;
-(UIImage *)artworkImage;
-(void)setContentItem:(void*)arg1 ;
-(BOOL)currentlyPlaying;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(id)_initWithModel:(id)arg1 MRContentItem:(void*)arg2 ;
@end

