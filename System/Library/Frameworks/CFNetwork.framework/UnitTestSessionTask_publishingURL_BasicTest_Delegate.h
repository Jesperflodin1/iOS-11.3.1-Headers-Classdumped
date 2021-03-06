/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface UnitTestSessionTask_publishingURL_BasicTest_Delegate : NSObject <NSURLSessionTaskDelegate> {

	SmartBlockWithArgs<bool, NSError *>* _didDidCompleteWithErrorCompletionBlock;

}

@property (assign,nonatomic) SmartBlockWithArgs<bool didDidCompleteWithErrorCompletionBlock;              //@synthesize didDidCompleteWithErrorCompletionBlock=_didDidCompleteWithErrorCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SmartBlockWithArgs<bool)didDidCompleteWithErrorCompletionBlock;
-(void)setDidDidCompleteWithErrorCompletionBlock:(SmartBlockWithArgs<bool)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
@end

