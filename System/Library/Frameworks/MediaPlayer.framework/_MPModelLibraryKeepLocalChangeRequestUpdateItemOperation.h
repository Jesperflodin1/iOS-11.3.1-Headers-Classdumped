/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaItem;

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation {

	MPMediaItem* _mediaItem;
	long long _keepLocal;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) long long keepLocal;                  //@synthesize keepLocal=_keepLocal - In the implementation block
-(void)setKeepLocal:(long long)arg1 ;
-(long long)keepLocal;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(void)execute;
@end

