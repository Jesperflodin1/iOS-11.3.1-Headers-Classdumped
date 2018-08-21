/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CXCallObserver, NSObject, NSString;

@interface CXCallController : NSObject {

	CXCallObserver* _callObserver;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSString* _extensionIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) CXCallObserver * callObserver;                             //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,copy) NSString * extensionIdentifier;                              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTransactionWithActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CXCallObserver *)callObserver;
-(void)requestTransactionWithAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
