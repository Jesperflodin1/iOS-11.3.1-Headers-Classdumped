//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIAlertController, UIViewController;

@interface CbAlert : NSObject
{
    UIViewController *_parentViewController;
    UIAlertController *_alertController;
}

+ (id)topMostViewController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)showInParentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showInParentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showInParentViewController:(id)arg1;
- (void)show;
- (void)dismiss;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelButtonHandler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

