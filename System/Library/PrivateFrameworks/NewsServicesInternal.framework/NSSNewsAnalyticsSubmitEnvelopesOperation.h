/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class NSArray;

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation {

	NSArray* _envelopes;
	/*^block*/id _submissionCompletion;

}

@property (nonatomic,copy) NSArray * envelopes;                  //@synthesize envelopes=_envelopes - In the implementation block
@property (nonatomic,copy) id submissionCompletion;              //@synthesize submissionCompletion=_submissionCompletion - In the implementation block
-(id)init;
-(NSArray *)envelopes;
-(void)setEnvelopes:(NSArray *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(id)submissionCompletion;
-(void)setSubmissionCompletion:(id)arg1 ;
@end

