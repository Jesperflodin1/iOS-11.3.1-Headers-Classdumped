/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XCTWaiterDelegate <NSObject>
@required
-(void)waiter:(id)arg1 didTimeoutWithUnfulfilledExpectations:(id)arg2;
-(void)waiter:(id)arg1 fulfillmentDidViolateOrderingConstraintsForExpectation:(id)arg2 requiredExpectation:(id)arg3;
-(void)waiter:(id)arg1 didFulfillInvertedExpectation:(id)arg2;
-(void)nestedWaiter:(id)arg1 wasInterruptedByTimedOutWaiter:(id)arg2;

@end

