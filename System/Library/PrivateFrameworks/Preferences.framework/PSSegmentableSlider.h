/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UISlider.h>

@class UIColor, UISelectionFeedbackGenerator;

@interface PSSegmentableSlider : UISlider {

	UIColor* _trackMarkersColor;
	BOOL _segmented;
	BOOL _locksToSegment;
	BOOL _snapsToSegment;
	unsigned long long _segmentCount;
	UISelectionFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,getter=isSegmented,nonatomic) BOOL segmented;                             //@synthesize segmented=_segmented - In the implementation block
@property (assign,nonatomic) BOOL locksToSegment;                                           //@synthesize locksToSegment=_locksToSegment - In the implementation block
@property (assign,nonatomic) BOOL snapsToSegment;                                           //@synthesize snapsToSegment=_snapsToSegment - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;                               //@synthesize segmentCount=_segmentCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setSegmented:(BOOL)arg1 ;
-(void)setLocksToSegment:(BOOL)arg1 ;
-(void)setSnapsToSegment:(BOOL)arg1 ;
-(void)sliderTapped:(id)arg1 ;
-(void)controlInteractionBegan:(id)arg1 ;
-(void)controlInteractionEnded:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(BOOL)isSegmented;
-(BOOL)locksToSegment;
-(BOOL)snapsToSegment;
-(unsigned long long)segmentCount;
-(void)setSegmentCount:(unsigned long long)arg1 ;
@end

