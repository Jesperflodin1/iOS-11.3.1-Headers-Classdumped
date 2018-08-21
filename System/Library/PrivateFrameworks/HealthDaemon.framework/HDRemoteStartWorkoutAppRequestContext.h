/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDCodableStartWorkoutAppRequest;

@interface HDRemoteStartWorkoutAppRequestContext : NSObject {

	HDCodableStartWorkoutAppRequest* _request;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDCodableStartWorkoutAppRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completion;                                            //@synthesize completion=_completion - In the implementation block
-(void)setRequest:(HDCodableStartWorkoutAppRequest *)arg1 ;
-(HDCodableStartWorkoutAppRequest *)request;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

