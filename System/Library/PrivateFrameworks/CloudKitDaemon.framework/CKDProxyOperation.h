/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>
#import <libobjc.A.dylib/CKDOperationInfoDelegate.h>

@class CKOperationResult, NSString;

@interface CKDProxyOperation : CKDOperation <CKDOperationInfoDelegate> {

	BOOL _didHandleCancel;
	/*^block*/id _operationProgressedBlock;
	CKOperationResult* _cachedResult;

}

@property (nonatomic,retain) CKOperationResult * cachedResult;                     //@synthesize cachedResult=_cachedResult - In the implementation block
@property (assign,nonatomic) BOOL didHandleCancel;                                 //@synthesize didHandleCancel=_didHandleCancel - In the implementation block
@property (nonatomic,copy) id operationProgressedBlock;                            //@synthesize operationProgressedBlock=_operationProgressedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(void)main;
-(BOOL)isInvalidated;
-(id)operationResult;
-(BOOL)isProxyOperation;
-(BOOL)shouldCheckAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setOperationProgressedBlock:(id)arg1 ;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1 ;
-(void)operationWithID:(id)arg1 didProgress:(id)arg2 ;
-(void)operationWithID:(id)arg1 didComplete:(id)arg2 ;
-(void)_cancelOnCallbackQueueIfNecessary;
-(id)operationProgressedBlock;
-(void)setCachedResult:(CKOperationResult *)arg1 ;
-(BOOL)didHandleCancel;
-(void)setDidHandleCancel:(BOOL)arg1 ;
-(CKOperationResult *)cachedResult;
@end

