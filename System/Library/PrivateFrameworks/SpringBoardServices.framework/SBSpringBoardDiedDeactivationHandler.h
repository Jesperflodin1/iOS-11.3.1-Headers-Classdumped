/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSPortDeathSentinel, NSMutableArray, NSLock;

@interface SBSpringBoardDiedDeactivationHandler : NSObject {

	BSPortDeathSentinel* _portDeathSentinel;
	NSMutableArray* _handlerBlockArray;
	NSLock* _lock;

}
+(id)sharedInstance;
-(void)addDeactivationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

