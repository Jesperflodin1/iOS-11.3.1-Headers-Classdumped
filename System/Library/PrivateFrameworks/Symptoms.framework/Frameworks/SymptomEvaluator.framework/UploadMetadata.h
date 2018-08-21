/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface UploadMetadata : NSObject {

	BOOL _uploaded;
	short _taskState;
	short _observedPrimaryInterfaceOnCompletion;
	NSURL* _fileURL;
	unsigned long long _retryCount;
	unsigned long long _fileSize;
	unsigned long long _httpStatusCode;
	NSString* _errorDomain;
	long long _errorCode;

}

@property (nonatomic,retain) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                           //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                           //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long httpStatusCode;                       //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (nonatomic,retain) NSString * errorDomain;                                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) long long errorCode;                                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) short taskState;                                         //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) short observedPrimaryInterfaceOnCompletion;              //@synthesize observedPrimaryInterfaceOnCompletion=_observedPrimaryInterfaceOnCompletion - In the implementation block
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(void)setErrorCode:(long long)arg1 ;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(long long)errorCode;
-(id)init;
-(id)description;
-(id)debugDescription;
-(unsigned long long)fileSize;
-(void)setFileSize:(unsigned long long)arg1 ;
-(NSURL *)fileURL;
-(void)setHttpStatusCode:(unsigned long long)arg1 ;
-(unsigned long long)httpStatusCode;
-(void)setFileURL:(NSURL *)arg1 ;
-(BOOL)uploaded;
-(void)setUploaded:(BOOL)arg1 ;
-(short)taskState;
-(void)setTaskState:(short)arg1 ;
-(short)observedPrimaryInterfaceOnCompletion;
-(void)setObservedPrimaryInterfaceOnCompletion:(short)arg1 ;
@end

