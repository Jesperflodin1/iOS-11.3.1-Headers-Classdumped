/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel;

@interface RegionFormatSampleView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	double _sized;
	double _labelTopPadding[4];

}
-(void)setTextForRegionExample:(id)arg1 ;
-(id)generateRegionSampleLabel;
-(void)layoutSubviews;
-(void)dealloc;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(id)_accessibilityLabels;
@end
