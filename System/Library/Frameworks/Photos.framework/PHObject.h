/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PLLocalUUIDConverter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSManagedObjectID, PHPhotoLibrary;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying> {

	BOOL _deleted;
	NSString* _uuid;
	NSManagedObjectID* _objectID;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _propertyHint;

}

@property (readonly) NSManagedObjectID * objectID;                           //@synthesize objectID=_objectID - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary;                          //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) id identifier; 
@property (getter=isDeleted,readonly) BOOL deleted;                          //@synthesize deleted=_deleted - In the implementation block
@property (assign) unsigned long long propertyHint;                          //@synthesize propertyHint=_propertyHint - In the implementation block
@property (readonly) NSString * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (getter=isTransient,readonly) BOOL transient; 
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
+(id)managedEntityName;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)identifierPropertiesToFetch;
+(id)identifierCodeFromLocalIdentifier:(id)arg1 ;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2 ;
+(void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsVisibilityState;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsSavedAssetType;
+(BOOL)managedObjectSupportsMontage;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsKeyFaces;
+(id)localIdentifierExpressionForFetchRequests;
+(BOOL)managedObjectSupportsFaceState;
+(id)fetchType;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)uuidFromLocalIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localIdentifier;
-(BOOL)isTransient;
-(NSString *)uuid;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(void)setPropertyHint:(unsigned long long)arg1 ;
-(unsigned long long)propertyHint;
-(BOOL)hasLoadedPropertySet:(id)arg1 ;
-(id)_shortObjectIDURI;
-(NSManagedObjectID *)objectID;
-(PHPhotoLibrary *)photoLibrary;
-(BOOL)isDeleted;
@end

