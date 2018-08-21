/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictions.framework/SearchToSharePredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGQPSearchToShareProtocol.h>
#import <libobjc.A.dylib/SGQPSearchToShareInternalToolProtocol.h>

@class Protocol, NSString, NSXPCInterface;

@interface SGQPClient : NSObject <SGQPSearchToShareProtocol, SGQPSearchToShareInternalToolProtocol> {

	Protocol* _protocol;
	NSString* _machServiceName;
	NSXPCInterface* _interface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientForSearchToShare;
+(id)clientForInternalTool;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEndSearch:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)didEngageSuggestion:(id)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(id)remoteProxyObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(void)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryPredictionsForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)searchViewDidAppear:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)searchViewDidDisappear:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didStartSearch:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didEndSearch:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didEngageSuggestion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didEngageResult:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendCustomFeedback:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 ;
-(void)addMessageToConversation:(id)arg1 withContent:(id)arg2 isSent:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)assetInfoWithCompletion:(/*^block*/id)arg1 ;
@end

