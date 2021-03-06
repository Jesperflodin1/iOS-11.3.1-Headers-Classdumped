/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLRejectedRecords, NSMutableArray, NSString, CPLPlatformObject;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {

	CPLRejectedRecords* _rejectedRecords;
	unsigned long long _rejectedCount;
	BOOL _rejectedRecordsHasChanges;
	CPLRejectedRecords* _newRejectedRecords;
	NSMutableArray* _quarantineMessages;
	unsigned long long _newRejectedCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)removeQuarantinedRecordsWithIdentifier:(id)arg1 notify:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)resetRejectedRecordsWithError:(id*)arg1 ;
-(BOOL)isRecordWithIdentifierQuarantined:(id)arg1 ;
-(BOOL)bumpRejectedRecords:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOfQuarantinedRecords;
-(BOOL)addQuarantinedRecordsWithIdentifier:(id)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2 ;
-(BOOL)resetWithError:(id*)arg1 ;
@end

