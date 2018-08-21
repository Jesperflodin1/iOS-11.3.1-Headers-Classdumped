/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController {

	double _minimumHeight;

}

@property (nonatomic,readonly) double minimumHeight;              //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(double)minimumHeight;
-(id)_buildGraphViewWithLabelDimension:(id)arg1 ;
-(id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2 ;
-(void)_setupGraphViewSelectionStyle;
-(void)_pinView:(id)arg1 toParentView:(id)arg2 ;
-(id)initWithMinimumHeight:(double)arg1 ;
@end
