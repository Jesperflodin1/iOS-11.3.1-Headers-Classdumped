//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class UIView, UIViewController;

@interface FBAdViewControllerProxy : NSProxy
{
    UIViewController *_viewController;
    UIView *_view;
}

+ (_Bool)isViewControllerProxy:(id)arg1;
+ (id)proxyWithViewController:(id)arg1 withView:(id)arg2;
+ (id)proxyWithViewController:(id)arg1;
+ (id)viewController;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)checkAndUpdateCurrentViewControllerWithCondition:(CDUnknownBlockType)arg1;
- (id)currentViewController;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithViewController:(id)arg1 withView:(id)arg2;

@end

