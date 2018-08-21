/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLRecordChange, NSString;

@interface CPLRecordStatus : NSObject <NSSecureCoding> {

	SCD_Union_CP6 _status;
	CPLRecordChange* _record;
	unsigned long long _generation;

}

@property (nonatomic,readonly) unsigned long long generation;                              //@synthesize generation=_generation - In the implementation block
@property (assign,getter=isUnknown,nonatomic) BOOL unknown; 
@property (assign,getter=isQuarantined,nonatomic) BOOL quarantined; 
@property (assign,getter=isResetting,nonatomic) BOOL resetting; 
@property (assign,getter=isUploaded,nonatomic) BOOL uploaded; 
@property (assign,getter=isWaitingForUpload,nonatomic) BOOL waitingForUpload; 
@property (assign,getter=isUploading,nonatomic) BOOL uploading; 
@property (assign,getter=isWaitingForUpdate,nonatomic) BOOL waitingForUpdate; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (nonatomic,readonly) CPLRecordChange * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) NSString * statusDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isUploading;
-(void)setUnknown:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isResetting;
-(BOOL)isWaitingForUpload;
-(BOOL)isWaitingForUpdate;
-(void)setQuarantined:(BOOL)arg1 ;
-(void)setResetting:(BOOL)arg1 ;
-(void)setWaitingForUpload:(BOOL)arg1 ;
-(void)setUploading:(BOOL)arg1 ;
-(void)setWaitingForUpdate:(BOOL)arg1 ;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 ;
-(BOOL)isUploaded;
-(BOOL)isQuarantined;
-(BOOL)isUnknown;
-(BOOL)isUpdating;
-(void)setUpdating:(BOOL)arg1 ;
-(NSString *)statusDescription;
-(CPLRecordChange *)record;
-(unsigned long long)generation;
-(void)setUploaded:(BOOL)arg1 ;
@end
