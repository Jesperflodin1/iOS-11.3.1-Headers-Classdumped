/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class HKWorkout, HKRingsView, UIImageView, UILabel, UIView;

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell {

	HKWorkout* _workout;
	double _currentCompletionFactor;
	HKRingsView* _ringsView;
	UIImageView* _iconImageView;
	UILabel* _typeLabel;
	UILabel* _secondaryLabel;
	UIView* _separatorView;

}

@property (nonatomic,retain) HKRingsView * ringsView;                     //@synthesize ringsView=_ringsView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                 //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                         //@synthesize typeLabel=_typeLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                    //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                      //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) double currentCompletionFactor;              //@synthesize currentCompletionFactor=_currentCompletionFactor - In the implementation block
@property (nonatomic,retain) HKWorkout * workout;                         //@synthesize workout=_workout - In the implementation block
+(double)_ringTopPadding;
+(double)_ringToTypeSpacing;
+(double)_typeToSecondaryLabelSpacing;
+(double)_secondaryLabelToSeparatorSpacing;
+(double)rowHeightForWorkout:(id)arg1 width:(double)arg2 ;
+(double)_ringDiameter;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(UILabel *)typeLabel;
-(HKRingsView *)ringsView;
-(void)setRingsView:(HKRingsView *)arg1 ;
-(void)setWorkout:(id)arg1 fillRing:(BOOL)arg2 ;
-(void)setCurrentCompletionFactor:(double)arg1 ;
-(void)setWorkoutWithoutFillingRing:(id)arg1 ;
-(void)animateRingWithCompletion:(/*^block*/id)arg1 ;
-(double)currentCompletionFactor;
-(HKWorkout *)workout;
-(void)setWorkout:(HKWorkout *)arg1 ;
@end
