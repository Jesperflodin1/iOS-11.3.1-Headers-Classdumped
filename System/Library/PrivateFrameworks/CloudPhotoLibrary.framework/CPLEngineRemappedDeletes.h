/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableDictionary, NSString, CPLPlatformObject;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject> {

	NSMutableDictionary* _perTransactionRemappedIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(id)realIdentifierForRemappedIdentifier:(id)arg1 ;
-(id)_fixupRemappedDeletesAndReturnBestCloudIdentifierFromRemappedIdentifiers:(id)arg1 fallback:(id)arg2 ;
-(void)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(BOOL)arg3 ;
-(void)discardDeleteForRemappedRecordWithIdentifier:(id)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
@end

