/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUControlPanelCell.h>

@class NSString;

@interface HUTitleControlCell : HUControlPanelCell

@property (nonatomic,copy) NSString * controlTitle; 
@property (nonatomic,retain) UIView*<HUControlView> controlView; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIView*<HUControlView>)controlView;
-(void)setControlView:(UIView*<HUControlView>)arg1 ;
-(id)allControlViews;
-(void)setControlTitle:(NSString *)arg1 ;
-(NSString *)controlTitle;
@end
