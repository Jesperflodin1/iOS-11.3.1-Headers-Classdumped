/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDFHIRResourceTask.h>

@class HDFHIRResourceSchema, NSURL;

@interface HDFHIRResourceRequestTask : HDFHIRResourceTask {

	/*^block*/id _queryCompletion;
	HDFHIRResourceSchema* _resourceSchema;
	NSURL* _requestURL;

}

@property (nonatomic,copy,readonly) id queryCompletion;                                 //@synthesize queryCompletion=_queryCompletion - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRResourceSchema * resourceSchema;              //@synthesize resourceSchema=_resourceSchema - In the implementation block
@property (nonatomic,copy,readonly) NSURL * requestURL;                                 //@synthesize requestURL=_requestURL - In the implementation block
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)createURLRequestWithCredentialResult:(id)arg1 error:(out id*)arg2 ;
-(id)initWithCredentialedSession:(id)arg1 resourceSchema:(id)arg2 requestURL:(id)arg3 completion:(/*^block*/id)arg4 ;
-(HDFHIRResourceSchema *)resourceSchema;
-(id)queryCompletion;
-(NSURL *)requestURL;
@end

