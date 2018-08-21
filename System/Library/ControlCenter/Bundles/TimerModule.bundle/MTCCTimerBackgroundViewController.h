/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MTCCTimerBackgroundViewControllerDelegate;
@class MTCCTimer, MTCCRoundButton, UIView, UILabel, CADisplayLink, NSDateComponentsFormatter;

@interface MTCCTimerBackgroundViewController : UIViewController {

	id<MTCCTimerBackgroundViewControllerDelegate> _delegate;
	MTCCTimer* _timer;
	MTCCRoundButton* _button;
	UIView* _headerView;
	UILabel* _titleLabel;
	UILabel* _timeLabel;
	CADisplayLink* _displayLink;
	NSDateComponentsFormatter* _dateComponentsFormatter;

}

@property (nonatomic,retain) MTCCRoundButton * button;                                                   //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * dateComponentsFormatter;                        //@synthesize dateComponentsFormatter=_dateComponentsFormatter - In the implementation block
@property (assign,nonatomic,__weak) id<MTCCTimerBackgroundViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MTCCTimer * timer;                                                            //@synthesize timer=_timer - In the implementation block
-(void)handleContentSizeChange:(id)arg1 ;
-(void)_reloadForCurrentState;
-(id)init;
-(MTCCRoundButton *)button;
-(id<MTCCTimerBackgroundViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MTCCTimerBackgroundViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setButton:(MTCCRoundButton *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(MTCCTimer *)timer;
-(void)setTimer:(MTCCTimer *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(NSDateComponentsFormatter *)dateComponentsFormatter;
-(void)setDateComponentsFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)_updateLabels;
-(void)displayLinkTick:(id)arg1 ;
@end
