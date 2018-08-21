/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSArray, NSMutableDictionary, NSString;

@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	NSArray* _subOperations;
	NSMutableDictionary* _resultDictionary;
	/*^block*/id _wrapperOperationCompletionHandler;

}

@property (nonatomic,copy) id wrapperOperationCompletionHandler;              //@synthesize wrapperOperationCompletionHandler=_wrapperOperationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)wrapperOperationCompletionHandler;
-(void)setWrapperOperationCompletionHandler:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 subOperations:(id)arg2 ;
@end

