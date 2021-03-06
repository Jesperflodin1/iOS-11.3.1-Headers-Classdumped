/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteModule/TVRemoteModule-Structs.h>
#import <TVRemoteModule/TVRMButton.h>

@class UILabel, CALayer;

@interface TVRRemoteTextButton : TVRMButton {

	UILabel* _label;
	CALayer* _circularBackgroundLayer;

}
-(id)initWithFrame:(CGRect)arg1 labelText:(id)arg2 drawButtonShape:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 labelText:(id)arg2 drawButtonShape:(BOOL)arg3 diameter:(double)arg4 ;
-(void)configureSelectedState;
-(void)configureNormalState;
-(id)initWithFrame:(CGRect)arg1 labelText:(id)arg2 ;
-(void)layoutSubviews;
@end

