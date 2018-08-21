/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNPersonsModel.h>

@class VNPersonsModelFaceModel, NSMutableDictionary, NSMutableIndexSet, NSDate;

@interface VNMutablePersonsModel : VNPersonsModel {

	VNPersonsModelFaceModel* _faceModel_DO_NOT_ACCESS_DIRECTLY;
	NSMutableDictionary* _personUniqueIdentifierToSerialNumberMapping;
	NSMutableDictionary* _serialNumberToFaceprintsMapping;
	NSMutableIndexSet* _availablePersonSerialNumbers;
	NSDate* _lastModificationDate;

}
+(id)_version2ModelWithObjects:(id)arg1 error:(id*)arg2 ;
+(id)_version1ModelWithObjects:(id)arg1 error:(id*)arg2 ;
+(id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3 ;
+(id)supportedWriteVersions;
-(id)description;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_uniqueFaceprintsWithRegistrationState:(BOOL)arg1 forFaceprints:(id)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)_requestNewIdentitySerialNumberAndReturnError:(id*)arg1 ;
-(void)_modelWasModified;
-(void)_removeAllFaceprintsFromIdentityWithSerialNumber:(id)arg1 ;
-(void)_removeExistingFaceprints:(id)arg1 fromIdentityWithSerialNumber:(id)arg2 ;
-(BOOL)_writeVersion1InformationToOutputStream:(id)arg1 md5Context:(CC_MD5state_st*)arg2 error:(id*)arg3 ;
-(BOOL)_writeVersion1ConfigurationToOutputStream:(id)arg1 md5Context:(CC_MD5state_st*)arg2 error:(id*)arg3 ;
-(id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeReadOnlyVersion:(unsigned long long)arg1 toOutputStream:(id)arg2 options:(id)arg3 md5Context:(CC_MD5state_st*)arg4 error:(id*)arg5 ;
-(BOOL)_addUniqueFaceprints:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)_getModelWritingImplementation:(/*function pointer*/void**)arg1 selector:(SEL*)arg2 forVersion:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(BOOL)_getModelWritingImplementation:(/*function pointer*/void**)arg1 selector:(SEL*)arg2 version:(unsigned long long*)arg3 forOptions:(id)arg4 ;
-(BOOL)writeToStream:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)_writeToUnopenedStream:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_uniqueFaceprintsWithRegistrationState:(BOOL)arg1 forFaceObservations:(id)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)_removeExistingFaceprints:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 ;
-(id)identitySerialNumberForPersonWithUniqueIdentifier:(id)arg1 ;
-(void)_removePersonWithUniqueIdentifier:(id)arg1 ;
-(unsigned long long)faceprintCountForPersonWithUniqueIdentifier:(id)arg1 ;
-(BOOL)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(CC_MD5state_st*)arg3 error:(id*)arg4 ;
-(BOOL)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(CC_MD5state_st*)arg3 error:(id*)arg4 ;
-(BOOL)writeVersion2ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(CC_MD5state_st*)arg3 error:(id*)arg4 ;
-(BOOL)writeReadOnlyVersion2ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(CC_MD5state_st*)arg3 error:(id*)arg4 ;
-(unsigned long long)personCount;
-(id)personUniqueIdentifiers;
-(unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1 ;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1 ;
-(id)faceCountsForAllPersons;
-(id)dataWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)addFaceprints:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 ;
-(void)removePersonWithUniqueIdentifier:(id)arg1 ;
@end

