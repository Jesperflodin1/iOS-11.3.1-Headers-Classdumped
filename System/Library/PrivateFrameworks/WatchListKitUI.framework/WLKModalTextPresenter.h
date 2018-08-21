/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface WLKModalTextPresenter : UIViewController {

	NSString* _text;
	BOOL* _hideDoneButton;

}

@property (nonatomic,copy) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL* hideDoneButton;              //@synthesize hideDoneButton=_hideDoneButton - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)presentFromParentViewController:(id)arg1 ;
-(void)donePressed;
-(id)initWithTitle:(id)arg1 text:(id)arg2 doneButton:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg1 text:(id)arg2 ;
-(BOOL*)hideDoneButton;
-(void)setHideDoneButton:(BOOL*)arg1 ;
@end

