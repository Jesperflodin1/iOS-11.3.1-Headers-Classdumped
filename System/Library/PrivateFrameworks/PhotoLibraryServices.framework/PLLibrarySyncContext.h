/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLSyncContext.h>

@class NSArray, NSMutableDictionary, PLPhotoLibrary, PLCloudRecordOrganizer, NSString;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {

	NSMutableDictionary* _assetAdjustmentStatesByCloudIdentifier;
	NSArray* _personUUIDsToDedupe;
	PLPhotoLibrary* _photoLibrary;
	PLCloudRecordOrganizer* _recordOrganizer;

}

@property (readonly) PLPhotoLibrary * photoLibrary;                         //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) PLCloudRecordOrganizer * recordOrganizer;              //@synthesize recordOrganizer=_recordOrganizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL serverSupportsVision; 
@property (nonatomic,readonly) BOOL serverSupportsGraphHome; 
@property (nonatomic,copy) NSArray * personUUIDsToDedupe;                   //@synthesize personUUIDsToDedupe=_personUUIDsToDedupe - In the implementation block
-(void)dealloc;
-(BOOL)serverSupportsVision;
-(id)makeFace;
-(void)deleteFaces:(id)arg1 ;
-(id)personForUUID:(id)arg1 ;
-(BOOL)personUUIDIsDeleted:(id)arg1 ;
-(id)assetAdjustmentStateForCloudIdentifier:(id)arg1 ;
-(BOOL)serverSupportsGraphHome;
-(NSArray *)personUUIDsToDedupe;
-(void)setPersonUUIDsToDedupe:(NSArray *)arg1 ;
-(void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2 ;
-(PLCloudRecordOrganizer *)recordOrganizer;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
@end

