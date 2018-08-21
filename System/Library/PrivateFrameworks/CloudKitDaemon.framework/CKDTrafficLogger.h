/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKDTrafficLogger : NSObject {

	long long _sequenceNumber;
	NSString* _requestID;

}

@property (assign,nonatomic) long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * requestID;                  //@synthesize requestID=_requestID - In the implementation block
-(void)setSequenceNumber:(long long)arg1 ;
-(long long)sequenceNumber;
-(BOOL)shouldLog;
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(id)initWithRequestID:(id)arg1 ;
-(void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2 ;
-(void)logPartialRequestObjectData:(id)arg1 ;
-(void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3 ;
-(void)finishRequestLog;
-(void)logResponse:(id)arg1 ;
-(void)logPartialResponseObjectData:(id)arg1 ;
-(void)logRequestBodyStreamReset;
-(void)_logObject:(id)arg1 ofType:(unsigned long long)arg2 ;
@end

