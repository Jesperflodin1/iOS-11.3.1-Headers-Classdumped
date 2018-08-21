/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@protocol DOCServicePopoverTrackerProtocol;
@class UIBarButtonItem;

@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController {

	id<DOCServicePopoverTrackerProtocol> _popoverTracker;
	UIBarButtonItem* _barButtonItem;

}

@property (retain) id<DOCServicePopoverTrackerProtocol> popoverTracker;              //@synthesize popoverTracker=_popoverTracker - In the implementation block
@property (__weak) UIBarButtonItem * barButtonItem;                                  //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(id<DOCServicePopoverTrackerProtocol>)popoverTracker;
-(void)setPopoverTracker:(id<DOCServicePopoverTrackerProtocol>)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
@end
