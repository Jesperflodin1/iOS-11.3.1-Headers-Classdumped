/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)resetAllFinalCloudIdentifiersWithError:(id*)arg1 ;
-(BOOL)addDeleteEventForRecordWithLocalIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addAddEventForRecordWithLocalIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)markAllPendingIdentifiersAsFinalWithError:(id*)arg1 ;
-(id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasPendingIdentifiers;
-(BOOL)removeMappingForCloudIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)localIdentifierForCloudIdentifierIncludeRemappedRecords:(id)arg1 ;
-(id)setupCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)resetWithError:(id*)arg1 ;
@end
