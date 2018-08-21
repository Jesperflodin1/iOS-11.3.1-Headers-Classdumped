/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOperationQueue, NSRegularExpression, NSMutableArray, NSMutableDictionary;

@interface SKUITemplateLoader : NSObject {

	SKUITemplateLoader* _retainSelf;
	NSArray* _URLs;
	/*^block*/id _completionBlock;
	NSOperationQueue* _operationQueue;
	NSRegularExpression* _templateParsingRegularExpression;
	NSMutableArray* _errors;
	NSMutableDictionary* _templateStrings;
	long long _pendingOperationCount;

}

@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * templateParsingRegularExpression;              //@synthesize templateParsingRegularExpression=_templateParsingRegularExpression - In the implementation block
@property (nonatomic,readonly) NSMutableArray * errors;                                             //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * templateStrings;                               //@synthesize templateStrings=_templateStrings - In the implementation block
@property (assign,nonatomic) long long pendingOperationCount;                                       //@synthesize pendingOperationCount=_pendingOperationCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * URLs;                                                 //@synthesize URLs=_URLs - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(NSArray *)URLs;
-(void)load;
-(NSOperationQueue *)operationQueue;
-(id)initWithURLs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSRegularExpression *)templateParsingRegularExpression;
-(void)_operation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_operation:(id)arg1 didCompleteWithOutput:(id)arg2 ;
-(NSMutableDictionary *)templateStrings;
-(void)_operationDidFinish:(id)arg1 ;
-(NSMutableArray *)errors;
-(long long)pendingOperationCount;
-(void)setPendingOperationCount:(long long)arg1 ;
-(id)_operationWithURL:(id)arg1 ;
@end

