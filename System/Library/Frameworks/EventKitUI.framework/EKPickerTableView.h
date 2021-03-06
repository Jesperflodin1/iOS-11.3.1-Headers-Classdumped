/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol EKPickerTableViewDelegate;
@class UIDatePicker, UITableView;

@interface EKPickerTableView : UIView {

	UIDatePicker* _datePicker;
	UITableView* _tableView;
	BOOL _showsDatePicker;
	BOOL _usesKeyboard;
	id<EKPickerTableViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;                                //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<EKPickerTableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDatePicker;                                       //@synthesize showsDatePicker=_showsDatePicker - In the implementation block
@property (assign,nonatomic) BOOL usesKeyboard;                                          //@synthesize usesKeyboard=_usesKeyboard - In the implementation block
@property (assign,nonatomic) BOOL usesBlackDatePicker; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<EKPickerTableViewDelegate>)delegate;
-(void)setDelegate:(id<EKPickerTableViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(UITableView *)tableView;
-(id)inputView;
-(void)_datePickerDoubleTapped:(id)arg1 ;
-(double)_heightForDatePicker;
-(id)initWithFrame:(CGRect)arg1 tableViewController:(id)arg2 ;
-(CGRect)_frameForDatePicker;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)setShowsDatePicker:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTableContentInset;
-(void)setUsesKeyboard:(BOOL)arg1 ;
-(void)setUsesBlackDatePicker:(BOOL)arg1 ;
-(BOOL)usesBlackDatePicker;
-(double)heightWithDatePickerAndTableHeight:(double)arg1 ;
-(BOOL)usesKeyboard;
-(UIDatePicker *)datePicker;
-(BOOL)showsDatePicker;
-(void)setShowsDatePicker:(BOOL)arg1 ;
@end

