/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol _UINavigationBarGestureHandlerDelegate;
@class UISwipeGestureRecognizer, UINavigationBar, NSString;

@interface _UINavigationBarGestureHandler : NSObject <UIGestureRecognizerDelegatePrivate> {

	UISwipeGestureRecognizer* _popSwipeGestureRecognizer;
	UINavigationBar* _navigationBar;
	id<_UINavigationBarGestureHandlerDelegate> _delegate;
	long long _idiom;

}

@property (nonatomic,__weak,readonly) UINavigationBar * navigationBar;                                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic,__weak) id<_UINavigationBarGestureHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long idiom;                                                         //@synthesize idiom=_idiom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UINavigationBarGestureHandlerDelegate>)delegate;
-(void)setDelegate:(id<_UINavigationBarGestureHandlerDelegate>)arg1 ;
-(UINavigationBar *)navigationBar;
-(id)initWithNavigationBar:(id)arg1 ;
-(long long)idiom;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handlePopSwipe:(id)arg1 ;
-(void)setIdiom:(long long)arg1 ;
@end

