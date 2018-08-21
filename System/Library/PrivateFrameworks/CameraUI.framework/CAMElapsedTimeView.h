/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSTimer, NSDate;

@interface CAMElapsedTimeView : UIView {

	long long _layoutStyle;
	UILabel* __timeLabel;
	UIImageView* __recordingImageView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) UILabel * _timeLabel;                           //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _recordingImageView;              //@synthesize _recordingImageView=__recordingImageView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                         //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                            //@synthesize _startTime=__startTime - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)resetTimer;
-(void)startTimer;
-(NSDate *)_startTime;
-(void)_setStartTime:(id)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UILabel *)_timeLabel;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(void)endTimer;
-(NSTimer *)_updateTimer;
-(void)updateToContentSize:(id)arg1 ;
-(void)_updateText;
-(void)_updateFont;
-(void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_updateForTimer:(id)arg1 ;
-(UIImageView *)_recordingImageView;
@end

