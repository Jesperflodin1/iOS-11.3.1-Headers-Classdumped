/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSTimer, _TVConfirmationDialogTemplateView;

@interface _TVConfirmationDialogTemplateController : UIViewController {

	BOOL _setTimer;
	NSTimer* _dismissTimer;

}

@property (nonatomic,readonly) NSTimer * dismissTimer;                                        //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,readonly) _TVConfirmationDialogTemplateView * templateView; 
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissConfirmation:(id)arg1 ;
-(void)_setupTimer;
-(_TVConfirmationDialogTemplateView *)templateView;
-(NSTimer *)dismissTimer;
@end

