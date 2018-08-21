/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUDayOfWeekPickerCellDelegate;
@class HFItem, NSSet, NSArray, UIStackView, NSString;

@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	id<HUDayOfWeekPickerCellDelegate> _delegate;
	NSSet* _selectedRecurrences;
	NSArray* _buttons;
	UIStackView* _buttonStackView;

}

@property (nonatomic,retain) NSArray * buttons;                                                //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIStackView * buttonStackView;                                    //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (assign,nonatomic,__weak) id<HUDayOfWeekPickerCellDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectedRecurrences;                                      //@synthesize selectedRecurrences=_selectedRecurrences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HFItem *)item;
-(id<HUDayOfWeekPickerCellDelegate>)delegate;
-(void)setDelegate:(id<HUDayOfWeekPickerCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)tintColorDidChange;
-(void)_setupConstraints;
-(NSArray *)buttons;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)_toggleWeekdayButton:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)_updateSelectedDays;
-(NSSet *)selectedRecurrences;
-(void)setSelectedRecurrences:(NSSet *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
@end
