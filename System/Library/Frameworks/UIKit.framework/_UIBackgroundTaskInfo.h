/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	int _count;

}
+(id)backgroundTaskAssertionQueue;
-(void)invalidate;
-(void)dealloc;
-(id)initWithProcessAssertion:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)fireExpirationHandler;
@end

