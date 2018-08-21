/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:32:08 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/DisplayFilterUIServer.axuiservice/DisplayFilterUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class AXDisplayFilterOverlayView, NSArray;

@interface AXDisplayFilterOverlayViewController : UIViewController {

	AXDisplayFilterOverlayView* __filterView;

}

@property (nonatomic,retain) AXDisplayFilterOverlayView * _filterView;              //@synthesize _filterView=__filterView - In the implementation block
@property (nonatomic,retain) NSArray * filters; 
-(void)set_filterView:(AXDisplayFilterOverlayView *)arg1 ;
-(AXDisplayFilterOverlayView *)_filterView;
-(void)fadeToBlackAndComeBack:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_applyInitialLayoutConstraints;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)viewDidLoad;
@end

