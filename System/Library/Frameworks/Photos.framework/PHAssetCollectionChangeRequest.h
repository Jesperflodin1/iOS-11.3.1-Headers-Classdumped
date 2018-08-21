/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHAssetCollection, NSString, PHChangeRequestHelper, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSManagedObjectID;

@interface PHAssetCollectionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHAssetCollection* _originalAssetCollection;
	BOOL _clientEntitled;
	NSString* _clientName;
	int _clientProcessID;
	PHChangeRequestHelper* _helper;
	PHRelationshipChangeRequestHelper* _assetsHelper;

}

@property (nonatomic,retain) PHAssetCollection * originalAssetCollection;                               //@synthesize originalAssetCollection=_originalAssetCollection - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * assetsHelper;                        //@synthesize assetsHelper=_assetsHelper - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedAssetCollection; 
@property (nonatomic,retain) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;                             //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                                   //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                                     //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) BOOL new; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                          //@synthesize helper=_helper - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2 ;
+(id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2 ;
+(id)changeRequestForAssetCollection:(id)arg1 ;
+(id)validateAssetCollectionTitle:(id)arg1 error:(id*)arg2 ;
+(id)creationRequestForAssetCollectionWithTitle:(id)arg1 ;
+(void)deleteAssetCollections:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(NSString *)uuid;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(NSString *)managedEntityName;
-(BOOL)isClientEntitled;
-(int)clientProcessID;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(PHChangeRequestHelper *)helper;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(id)_mutableObjectIDsAndUUIDs;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)_setOriginalAssetCollection:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)assetsHelper;
-(void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1 ;
-(void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2 ;
-(void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(PHAssetCollection *)originalAssetCollection;
-(void)setOriginalAssetCollection:(PHAssetCollection *)arg1 ;
-(BOOL)isNew;
-(void)removeAssets:(id)arg1 ;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)addAssets:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(PHObjectPlaceholder *)placeholderForCreatedAssetCollection;
-(NSString *)clientName;
-(void)addAsset:(id)arg1 ;
-(void)removeAsset:(id)arg1 ;
@end

