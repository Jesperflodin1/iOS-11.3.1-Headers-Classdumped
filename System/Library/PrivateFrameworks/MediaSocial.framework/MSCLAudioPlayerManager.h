/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSCLAudioPlayerDelegate.h>

@protocol MSCLAudioPlayerManagerDataSource;
@class MSCLAudioPlayer, NSString;

@interface MSCLAudioPlayerManager : NSObject <MSCLAudioPlayerDelegate> {

	id<MSCLAudioPlayerManagerDataSource> _dataSource;
	MSCLAudioPlayer* _player;

}

@property (assign,nonatomic,__weak) id<MSCLAudioPlayerManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<MSCLAudioPlayerManagerDataSource>)arg1 ;
-(void)dealloc;
-(id<MSCLAudioPlayerManagerDataSource>)dataSource;
-(void)stopPlayback;
-(void)_showPlaybackStatus:(id)arg1 usingPlayButton:(id)arg2 animated:(BOOL)arg3 ;
-(id)_playButtonForPlayer:(id)arg1 ;
-(void)audioPlayer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2 ;
-(void)personalizePlayButton:(id)arg1 withRepresentedObject:(id)arg2 animated:(BOOL)arg3 ;
-(void)playAsset:(id)arg1 withRepresentedObject:(id)arg2 ;
@end

