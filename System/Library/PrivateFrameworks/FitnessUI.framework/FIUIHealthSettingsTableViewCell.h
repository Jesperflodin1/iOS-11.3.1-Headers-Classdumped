/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FIUIHealthSettingsForceUpdatable;
@class UIView;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {

	UIView* _inputView;
	id<FIUIHealthSettingsForceUpdatable> _forceUpdatable;

}

@property (assign,nonatomic,__weak) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;              //@synthesize forceUpdatable=_forceUpdatable - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)inputView;
-(void)setInputView:(id)arg1 ;
-(void)setForceUpdatable:(id<FIUIHealthSettingsForceUpdatable>)arg1 ;
-(id<FIUIHealthSettingsForceUpdatable>)forceUpdatable;
@end

