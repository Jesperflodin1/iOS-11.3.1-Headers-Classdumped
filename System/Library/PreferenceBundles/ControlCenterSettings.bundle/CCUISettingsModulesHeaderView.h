/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/ControlCenterSettings.bundle/ControlCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterSettings/ControlCenterSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface CCUISettingsModulesHeaderView : UIView {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
-(CGRect)_labelFrameForBoundsWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
