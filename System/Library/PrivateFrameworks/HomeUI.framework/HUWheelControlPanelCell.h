/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUControlPanelCell.h>
#import <libobjc.A.dylib/HUWheelControlViewDelegate.h>

@class HUWheelControlView, UILabel, UIView, NSArray, NSString;

@interface HUWheelControlPanelCell : HUControlPanelCell <HUWheelControlViewDelegate> {

	BOOL _wheelViewVisible;
	HUWheelControlView* _wheelView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIView* _separatorView;
	NSArray* _staticConstraints;
	NSArray* _dynamicConstraints;

}

@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                        //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                       //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                    //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * dynamicConstraints;                   //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * detailText; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (nonatomic,retain) HUWheelControlView * wheelView;                 //@synthesize wheelView=_wheelView - In the implementation block
@property (assign,nonatomic) BOOL wheelViewVisible;                          //@synthesize wheelViewVisible=_wheelViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(NSString *)titleText;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)prepareForReuse;
-(UIView *)separatorView;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(UILabel *)detailLabel;
-(BOOL)isDisabled;
-(void)wheelControlView:(id)arg1 didUpdateValue:(id)arg2 ;
-(id)allControlViews;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(NSArray *)dynamicConstraints;
-(void)setWheelView:(HUWheelControlView *)arg1 ;
-(HUWheelControlView *)wheelView;
-(BOOL)wheelViewVisible;
-(void)setWheelViewVisible:(BOOL)arg1 ;
@end

