/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol HUAlarmTableViewCellDelegate;
@class MTUIAlarmView, UISwitch;

@interface HUAlarmTableViewCell : UITableViewCell {

	BOOL _disabled;
	BOOL _enabled;
	id<HUAlarmTableViewCellDelegate> _delegate;
	MTUIAlarmView* _alarmView;
	UISwitch* _enabledSwitch;

}

@property (nonatomic,retain) MTUIAlarmView * alarmView;                                     //@synthesize alarmView=_alarmView - In the implementation block
@property (nonatomic,retain) UISwitch * enabledSwitch;                                      //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUAlarmTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                               //@synthesize disabled=_disabled - In the implementation block
-(id)init;
-(BOOL)enabled;
-(id<HUAlarmTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<HUAlarmTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)refreshUI:(id)arg1 animated:(BOOL)arg2 ;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(UISwitch *)enabledSwitch;
-(void)_alarmActiveChanged:(id)arg1 ;
-(MTUIAlarmView *)alarmView;
-(void)setAlarmActiveDelegate:(id)arg1 ;
-(void)setupAsTemplateLayoutCell:(BOOL)arg1 ;
-(void)setAlarmView:(MTUIAlarmView *)arg1 ;
@end

