/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation {

	/*^block*/id _fetchWhitelistedBundleIDsCompletionBlock;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                      //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,copy) id fetchWhitelistedBundleIDsCompletionBlock;              //@synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock - In the implementation block
-(BOOL)hasCKOperationCallbacksSet;
-(void)performCKOperation;
-(Class)operationInfoClass;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchWhitelistedBundleIDsCompletionBlock;
-(void)setFetchWhitelistedBundleIDsCompletionBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
@end
