//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class MFMessageComposeViewController, NSString;
@protocol MFMessageComposeViewControllerDelegate;

@interface GADMessageComposeDelegateProxy : NSObject <MFMessageComposeViewControllerDelegate>
{
    GADMessageComposeDelegateProxy *_strongSelf;
    id <MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
    MFMessageComposeViewController *_messageComposeViewController;
}

+ (id)associatedDelegateProxyForController:(id)arg1;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(nonatomic) __weak id <MFMessageComposeViewControllerDelegate> messageComposeDelegate; // @synthesize messageComposeDelegate=_messageComposeDelegate;
- (void).cxx_destruct;
- (void)stopProxying;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)initInternal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

