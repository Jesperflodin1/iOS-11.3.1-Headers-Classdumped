/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, NSArray, NSError;

@interface FCTrendingOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	NSArray* _headlines;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;

}

@property (copy) NSArray * headlines;                                          //@synthesize headlines=_headlines - In the implementation block
@property (retain) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                         //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                  //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
-(id)catchUpCompletionHandler;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
@end

