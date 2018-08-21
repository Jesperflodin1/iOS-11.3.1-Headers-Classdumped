/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKit/StoreKit-Structs.h>
@class SKPaymentQueueClient, NSMutableArray, SKXPCConnection;

@interface SKPaymentQueueInternal : NSObject {

	BOOL _checkedIn;
	SKPaymentQueueClient* _client;
	BOOL _isRefreshing;
	NSMutableArray* _localTransactions;
	CFArrayRef _observers;
	SKXPCConnection* _requestConnection;
	SKXPCConnection* _responseConnection;
	BOOL _restoreFinishedDuringRefresh;
	BOOL _restoringCompletedTransactions;
	NSMutableArray* _transactions;

}
-(void)dealloc;
@end

