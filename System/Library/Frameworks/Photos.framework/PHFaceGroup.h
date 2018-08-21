/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@interface PHFaceGroup : PHObject {

	long long _unnamedFaceCount;
	long long _personModelId;
	long long _personBuilderState;

}

@property (nonatomic,readonly) long long personModelId;                   //@synthesize personModelId=_personModelId - In the implementation block
@property (nonatomic,readonly) long long personBuilderState;              //@synthesize personBuilderState=_personBuilderState - In the implementation block
@property (nonatomic,readonly) long long unnamedFaceCount;                //@synthesize unnamedFaceCount=_unnamedFaceCount - In the implementation block
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchFaceGroupsWithOptions:(id)arg1 ;
+(id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsWithFace:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)arg1 options:(id)arg2 ;
+(id)fetchEmptyFaceGroupsWithOptions:(id)arg1 ;
+(id)fetchType;
-(long long)personBuilderState;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(long long)getPersonModelId;
-(long long)unnamedFaceCount;
-(long long)personModelId;
@end

