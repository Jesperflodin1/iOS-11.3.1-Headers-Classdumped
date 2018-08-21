/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WCMessage, NSDate;

@interface WCQueuedMessage : NSObject {

	WCMessage* _message;
	/*^block*/id _completionHandler;
	NSDate* _creationDate;
	long long _retryCount;

}

@property (retain) WCMessage * message;                  //@synthesize message=_message - In the implementation block
@property (copy) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) long long retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setMessage:(WCMessage *)arg1 ;
-(WCMessage *)message;
-(NSDate *)creationDate;
-(id)initWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

