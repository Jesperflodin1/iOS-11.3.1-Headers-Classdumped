/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol RPBroadcastViewControllerDelegate;
@class RPBroadcastHostViewController;

@interface RPBroadcastViewController : UIViewController {

	id<RPBroadcastViewControllerDelegate> _delegate;
	RPBroadcastHostViewController* _hostViewController;
	/*^block*/id _setupCompletionHandler;

}

@property (nonatomic,retain) RPBroadcastHostViewController * hostViewController;                 //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id setupCompletionHandler;                                            //@synthesize setupCompletionHandler=_setupCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<RPBroadcastViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadBroadcastViewControllerWithBaseIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)getBroadcastExtensionWithBaseIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id<RPBroadcastViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)setHostViewController:(RPBroadcastHostViewController *)arg1 ;
-(RPBroadcastHostViewController *)hostViewController;
-(id)setupCompletionHandler;
-(void)setSetupCompletionHandler:(id)arg1 ;
@end

