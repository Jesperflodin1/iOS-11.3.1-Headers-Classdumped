/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol SUActivityDelegate;
@class UIImage, NSString, UIViewController;

@interface SUActivity : UIActivity {

	id<SUActivityDelegate> _delegate;
	UIImage* _suActivityImage;
	NSString* _suActivityTitle;
	NSString* _suActivityType;
	UIViewController* _suActivityViewController;

}

@property (assign,nonatomic,__weak) id<SUActivityDelegate> ITunesStoreDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)activityTitle;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)setActivityTitle:(id)arg1 ;
-(void)setActivityImage:(id)arg1 ;
-(void)setActivityViewController:(id)arg1 ;
-(void)setActivityType:(id)arg1 ;
-(void)setITunesStoreDelegate:(id<SUActivityDelegate>)arg1 ;
-(id<SUActivityDelegate>)ITunesStoreDelegate;
@end

