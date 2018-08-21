/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class NSTimer, UIView, _PGPlaybackProgressIndicatorRangesView, PGPlaybackProgress, NSArray;

@interface PGPlaybackProgressIndicator : UIView {

	NSTimer* _playbackProgressTimer;
	double _currentProgress;
	UIView* _containerView;
	_PGPlaybackProgressIndicatorRangesView* _loadedTimeRangesView;
	_PGPlaybackProgressIndicatorRangesView* _playbackProgressView;
	PGPlaybackProgress* _playbackProgress;
	NSArray* _loadedTimeRanges;

}

@property (nonatomic,retain) PGPlaybackProgress * playbackProgress;              //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,retain) NSArray * loadedTimeRanges;                         //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSArray *)loadedTimeRanges;
-(PGPlaybackProgress *)playbackProgress;
-(void)setPlaybackProgress:(PGPlaybackProgress *)arg1 ;
-(void)_updatePlaybackProgressMaskViewMaskRanges;
-(void)_updatePlaybackProgressTimer;
-(void)_updateLoadedTimeRangesMaskViewMaskRanges;
@end

