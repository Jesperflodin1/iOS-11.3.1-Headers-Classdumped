/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKPermanentWritableEventStore
@required
-(BOOL)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)recordEvent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)recordEvent:(id)arg1 error:(id*)arg2;
-(BOOL)recordInteraction:(id)arg1 error:(id*)arg2;
-(void)recordInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
-(void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

