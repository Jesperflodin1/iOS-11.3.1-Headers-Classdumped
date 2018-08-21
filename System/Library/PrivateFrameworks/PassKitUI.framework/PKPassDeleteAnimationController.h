/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassDeleteAnimationControllerDelegate;
@class UIAlertController, PKPassView, PKPassGroupView;

@interface PKPassDeleteAnimationController : NSObject {

	UIAlertController* _alertController;
	id<PKPassDeleteAnimationControllerDelegate> _delegate;
	PKPassView* _passView;
	PKPassGroupView* _groupView;

}

@property (assign,nonatomic) id<PKPassDeleteAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) PKPassView * passView;                                    //@synthesize passView=_passView - In the implementation block
@property (nonatomic,retain,readonly) PKPassGroupView * groupView;                              //@synthesize groupView=_groupView - In the implementation block
+(void)performPassbookDeleteWithView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PKPassDeleteAnimationControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPassDeleteAnimationControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)finished:(BOOL)arg1 ;
-(PKPassView *)passView;
-(void)_unregisterForEnterBackgroundNotification;
-(PKPassGroupView *)groupView;
-(void)_startAnimation;
-(void)_registerForEnterBackgroundNotification;
-(id)initWithPassView:(id)arg1 groupView:(id)arg2 ;
-(void)showInViewController:(id)arg1 ;
-(void)forceDeleteAnimation;
@end

