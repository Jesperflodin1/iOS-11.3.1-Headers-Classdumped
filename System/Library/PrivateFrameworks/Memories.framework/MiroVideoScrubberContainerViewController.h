/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MiroVideoScrubberViewControllerDelegate;
@class MiroVideoScrubberView, UIScrollView, UILabel, UIView, NSObject, NSTimer, NSError, MiroVideoScrubberCollectionViewController, UIImage;

@interface MiroVideoScrubberContainerViewController : UIViewController {

	double _estimatedDuration;
	BOOL _scrubberContentsNeedUpdate;
	MiroVideoScrubberView* _scrubber;
	id<MiroVideoScrubberViewControllerDelegate> _delegate;
	double _proposedDuration;
	UIScrollView* _internalScrubberScrollView;
	UIScrollView* _scrubberContainerScrollView;
	UILabel* _timeLabel;
	UIView* _timeLabelBackground;
	NSObject* _playbackTimeObserver;
	NSTimer* _playbackTimeHiddeTimer;
	unsigned long long _playbackTimeFormat;
	unsigned long long _playingStatus;
	double _elapsedTime;
	NSError* _error;
	MiroVideoScrubberCollectionViewController* _filmstripViewController;

}

@property (nonatomic,readonly) double estimatedDuration;                                                              //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * internalScrubberScrollView;                                        //@synthesize internalScrubberScrollView=_internalScrubberScrollView - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrubberContainerScrollView;                                       //@synthesize scrubberContainerScrollView=_scrubberContainerScrollView - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                                     //@synthesize timeLabel=_timeLabel - In the implementation block
@property (assign,nonatomic,__weak) MiroVideoScrubberView * scrubber;                                                 //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,retain) UIView * timeLabelBackground;                                                            //@synthesize timeLabelBackground=_timeLabelBackground - In the implementation block
@property (nonatomic,retain) NSObject * playbackTimeObserver;                                                         //@synthesize playbackTimeObserver=_playbackTimeObserver - In the implementation block
@property (nonatomic,retain) NSTimer * playbackTimeHiddeTimer;                                                        //@synthesize playbackTimeHiddeTimer=_playbackTimeHiddeTimer - In the implementation block
@property (assign,nonatomic) unsigned long long playbackTimeFormat;                                                   //@synthesize playbackTimeFormat=_playbackTimeFormat - In the implementation block
@property (assign,nonatomic) unsigned long long playingStatus;                                                        //@synthesize playingStatus=_playingStatus - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                                                      //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) MiroVideoScrubberCollectionViewController * filmstripViewController;              //@synthesize filmstripViewController=_filmstripViewController - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic,__weak) id<MiroVideoScrubberViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL scrubberContentsNeedUpdate;                                                         //@synthesize scrubberContentsNeedUpdate=_scrubberContentsNeedUpdate - In the implementation block
@property (assign,nonatomic) double proposedDuration;                                                                 //@synthesize proposedDuration=_proposedDuration - In the implementation block
-(id)init;
-(id<MiroVideoScrubberViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MiroVideoScrubberViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewDidLoad;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)elapsedTime;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setElapsedTime:(double)arg1 ;
-(void)_setCurrentTime:(double)arg1 ;
-(id)_labelTextWithFormat:(unsigned long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3 ;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(double)estimatedDuration;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(MiroVideoScrubberView *)scrubber;
-(void)setScrubberContainerScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrubberContainerScrollView;
-(void)setScrubber:(MiroVideoScrubberView *)arg1 ;
-(void)setFilmstripViewController:(MiroVideoScrubberCollectionViewController *)arg1 ;
-(void)setInternalScrubberScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)internalScrubberScrollView;
-(void)_updatePlayingStatus;
-(void)timeLabelForScrubbing;
-(MiroVideoScrubberCollectionViewController *)filmstripViewController;
-(void)_updateTimeLabelWithElapsedInterval:(double)arg1 remainingInterval:(double)arg2 ;
-(UIView *)timeLabelBackground;
-(void)setPlaybackTimeFormat:(unsigned long long)arg1 ;
-(unsigned long long)playbackTimeFormat;
-(void)hideTimeLabelAfterDelay:(double)arg1 ;
-(unsigned long long)playingStatus;
-(void)showTimeLabelMomentarily;
-(void)setPlaybackTimeHiddeTimer:(NSTimer *)arg1 ;
-(NSTimer *)playbackTimeHiddeTimer;
-(void)hideTimeLabelTimerAction;
-(BOOL)scrubberContentsNeedUpdate;
-(void)setScrubberContentsNeedUpdate:(BOOL)arg1 ;
-(NSObject *)playbackTimeObserver;
-(void)setPlaybackTimeObserver:(NSObject *)arg1 ;
-(void)setPlayingStatus:(unsigned long long)arg1 ;
-(void)setProposedDuration:(double)arg1 ;
-(void)updateScrubberWithPlayer:(id)arg1 ;
-(double)proposedDuration;
-(void)setTimeLabelBackground:(UIView *)arg1 ;
@end

