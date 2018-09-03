//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol CLSAnalyticsViewControllerTrackingDelegate;

@interface CLSAnalyticsViewControllerTrackingController : NSObject
{
    _Bool _isTracking;
    id <CLSAnalyticsViewControllerTrackingDelegate> _delegate;
    NSMutableSet *_blackListViewControllerClasses;
}

+ (_Bool)replaceMethodImplementationForClass:(Class)arg1 selector:(SEL)arg2 withImplementation:(CDUnknownFunctionPointerType)arg3 storingOldImplementation:(CDUnknownFunctionPointerType *)arg4;
+ (id)sharedInstance;
@property(nonatomic) __weak id <CLSAnalyticsViewControllerTrackingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanUpUIViewControllerSwizzle;
- (void)setUpUIViewControllerSwizzle;
- (_Bool)shouldLogViewController:(id)arg1;
- (_Bool)isBlacklistedViewControllerClass:(Class)arg1;
- (void)removeBlackListViewControllerClass:(Class)arg1;
- (void)addBlackListViewControllerClass:(Class)arg1;
- (void)startTracking;
- (void)disposeSharedInstance;
- (id)init;
- (void)dealloc;

@end

