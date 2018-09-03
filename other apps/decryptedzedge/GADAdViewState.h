//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIViewController;
@protocol GADAdViewDelegate;

@interface GADAdViewState : NSObject
{
    UIView *_superview;
    id <GADAdViewDelegate> _delegate;
    UIViewController *_viewController;
    unsigned long long _autoresizingMask;
    struct CGRect _frame;
}

@property(nonatomic) unsigned long long autoresizingMask; // @synthesize autoresizingMask=_autoresizingMask;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <GADAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *superview; // @synthesize superview=_superview;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;

@end

