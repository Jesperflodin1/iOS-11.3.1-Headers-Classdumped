/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUStepperCellProtocol.h>

@protocol HUStepperCellDelegate;
@class NSNumber, HFItem, UIStepper, UILabel, NSString;

@interface HUStepperCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol> {

	BOOL _disabled;
	HFItem* _item;
	NSNumber* _stepperValue;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	id<HUStepperCellDelegate> _stepperCellDelegate;
	UIStepper* _stepper;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UIStepper * stepper;                                               //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                     //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                   //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUStepperCellDelegate> stepperCellDelegate;              //@synthesize stepperCellDelegate=_stepperCellDelegate - In the implementation block
@property (nonatomic,copy) NSNumber * minimumValue;                                             //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,copy) NSNumber * maximumValue;                                             //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepValue;                                                //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepperValue;                                             //@synthesize stepperValue=_stepperValue - In the implementation block
-(HFItem *)item;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(BOOL)isDisabled;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_stepperValueDidChange:(id)arg1 ;
-(UIStepper *)stepper;
-(id)_valueDescription;
-(NSNumber *)stepperValue;
-(void)setStepperValue:(NSNumber *)arg1 ;
-(void)_toggleValueChange:(id)arg1 ;
-(id<HUStepperCellDelegate>)stepperCellDelegate;
-(void)setStepperCellDelegate:(id<HUStepperCellDelegate>)arg1 ;
-(void)setStepper:(UIStepper *)arg1 ;
@end

