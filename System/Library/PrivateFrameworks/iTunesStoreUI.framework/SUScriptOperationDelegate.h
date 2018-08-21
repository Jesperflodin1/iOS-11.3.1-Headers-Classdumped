/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISOperationDelegate.h>

@class NSMutableArray, NSLock, NSString;

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate> {

	NSMutableArray* _operations;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationFinished:(id)arg1 ;
-(void)dealloc;
-(void)cancelAllOperations;
-(void)_removeOperation:(id)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)enqueueOperation:(id)arg1 ;
@end
