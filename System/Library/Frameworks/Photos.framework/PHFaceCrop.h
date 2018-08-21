/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSData;

@interface PHFaceCrop : PHObject {

	short _state;
	short _type;
	NSData* _resourceData;

}

@property (nonatomic,readonly) NSData * resourceData;              //@synthesize resourceData=_resourceData - In the implementation block
@property (nonatomic,readonly) short state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) short type;                         //@synthesize type=_type - In the implementation block
+(id)managedEntityName;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1 ;
+(id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsWithOptions:(id)arg1 ;
+(id)fetchType;
-(short)state;
-(short)type;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSData *)resourceData;
@end

