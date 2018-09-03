//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FABKit-Protocol.h"

@class CLSAnalyticsController, NSString;

@interface Answers : NSObject <FABKit>
{
    CLSAnalyticsController *_analyticsController;
}

+ (void)initializeIfNeeded;
+ (id)kitBuildVersion;
+ (id)kitDisplayVersion;
+ (id)bundleIdentifier;
+ (void)logPredefinedEvent:(id)arg1;
+ (void)logCustomEventWithName:(id)arg1 customAttributes:(id)arg2;
+ (void)logSearchWithQuery:(id)arg1 customAttributes:(id)arg2;
+ (void)logContentViewWithName:(id)arg1 contentType:(id)arg2 contentId:(id)arg3 customAttributes:(id)arg4;
+ (void)logRating:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5;
+ (void)logStartCheckoutWithPrice:(id)arg1 currency:(id)arg2 itemCount:(id)arg3 customAttributes:(id)arg4;
+ (void)logAddToCartWithPrice:(id)arg1 currency:(id)arg2 itemName:(id)arg3 itemType:(id)arg4 itemId:(id)arg5 customAttributes:(id)arg6;
+ (void)logLevelEnd:(id)arg1 score:(id)arg2 success:(id)arg3 customAttributes:(id)arg4;
+ (void)logLevelStart:(id)arg1 customAttributes:(id)arg2;
+ (void)logPurchaseWithPrice:(id)arg1 currency:(id)arg2 success:(id)arg3 itemName:(id)arg4 itemType:(id)arg5 itemId:(id)arg6 customAttributes:(id)arg7;
+ (void)logShareWithMethod:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5;
+ (void)logLoginWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3;
+ (void)logSignUpWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3;
+ (void)logInviteWithMethod:(id)arg1 customAttributes:(id)arg2;
+ (void)logPreviousSessionCrashedOnDate:(id)arg1;
+ (void)startWithBetaToken:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) CLSAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
- (void).cxx_destruct;
- (void)startWithBetaToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

