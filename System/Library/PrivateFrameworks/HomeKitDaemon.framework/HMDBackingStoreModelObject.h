/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDBackingStoreObjectProtocol;
@class NSMutableDictionary, NSUUID, NSString, HMFVersion, CKRecord, NSSet;

@interface HMDBackingStoreModelObject : HMFObject <HMFLogging> {

	NSMutableDictionary* _reserved;
	BOOL _bsoDataVersionOverride;
	NSUUID* _uuid;
	NSUUID* _parentUUID;
	id<HMDBackingStoreObjectProtocol> _bsoDelegate;
	NSString* _bsoType;
	unsigned long long _bsoLogRowID;
	HMFVersion* _bsoDataVersion;
	unsigned long long _objectChangeType;
	CKRecord* _bsoRecord;

}

@property (nonatomic,retain) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSUUID * parentUUID;                                                        //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,retain) NSString * bsoType;                                                         //@synthesize bsoType=_bsoType - In the implementation block
@property (assign) BOOL bsoDataVersionOverride;                                                          //@synthesize bsoDataVersionOverride=_bsoDataVersionOverride - In the implementation block
@property (assign,nonatomic) unsigned long long objectChangeType;                                        //@synthesize objectChangeType=_objectChangeType - In the implementation block
@property (nonatomic,readonly) NSSet * dependentUUIDs; 
@property (assign,nonatomic,__weak) id<HMDBackingStoreObjectProtocol> bsoDelegate;                       //@synthesize bsoDelegate=_bsoDelegate - In the implementation block
@property (readonly) unsigned long long bsoLogRowID;                                                     //@synthesize bsoLogRowID=_bsoLogRowID - In the implementation block
@property (nonatomic,readonly) CKRecord * bsoRecord;                                                     //@synthesize bsoRecord=_bsoRecord - In the implementation block
@property (nonatomic,readonly) HMFVersion * bsoDataVersion;                                              //@synthesize bsoDataVersion=_bsoDataVersion - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL isReadOnly; 
@property (getter=isGenericRepresentation,nonatomic,readonly) BOOL isGenericRepresentation; 
@property (getter=isReplayable,nonatomic,readonly) BOOL replayable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)logCategory;
+(id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 record:(id)arg3 error:(id*)arg4 ;
+(id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 rowID:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)objectFromDictionaryData:(id)arg1 type:(id)arg2 error:(id*)arg3 ;
+(Class)genericRepresentation;
+(id)readonlyBefore;
+(id)formatValue:(id)arg1 ;
+(id)bsoSchemaHash;
+(id)objectFromDictionaryData:(id)arg1 error:(id*)arg2 ;
+(id)objectFromCloud:(id)arg1 error:(id*)arg2 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithUUID:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)parentUUID;
-(BOOL)isReadOnly;
-(id)setProperties;
-(id)initWithObjectChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(id)logIdentifier;
-(NSSet *)dependentUUIDs;
-(void)setObjectChangeType:(unsigned long long)arg1 ;
-(void)setParentUUID:(NSUUID *)arg1 ;
-(BOOL)diff:(id)arg1 differingFields:(id*)arg2 ;
-(unsigned long long)bsoLogRowID;
-(unsigned long long)objectChangeType;
-(void)dumpDebug;
-(void)setPropertyIfNotNil:(id)arg1 named:(id)arg2 ;
-(BOOL)propertyWasSet:(id)arg1 ;
-(id)debugString:(BOOL)arg1 ;
-(id)initWithUUID:(id)arg1 parentUUID:(id)arg2 ;
-(BOOL)isReplayable;
-(NSString *)bsoType;
-(id)encodeWithEncoding:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithVersion:(id)arg1 changeType:(unsigned long long)arg2 uuid:(id)arg3 parentUUID:(id)arg4 ;
-(void)clearVersionOverride;
-(BOOL)_validateType:(id)arg1 error:(id*)arg2 ;
-(id)prepareFor:(unsigned long long)arg1 ;
-(HMFVersion *)bsoDataVersion;
-(id)validateType:(id)arg1 path:(id)arg2 ;
-(id)encodeFor:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)encodeWithEncoding:(unsigned long long)arg1 for:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)encodeAsNSDictionaryFor:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isGenericRepresentation;
-(BOOL)propertyIsAvailable:(id)arg1 ;
-(BOOL)bsoDataVersionOverride;
-(id)merge:(id)arg1 from:(unsigned long long)arg2 ;
-(id)typeNameForDebug;
-(BOOL)propertyIsReadOnly:(id)arg1 ;
-(void)setBsoDataVersionOverride:(BOOL)arg1 ;
-(void)dumpDebug:(id)arg1 ;
-(id)encodeWithError:(id*)arg1 ;
-(id)encodeForCloud:(id*)arg1 ;
-(BOOL)validForStorage;
-(id)defaultValueForPropertyNamed:(id)arg1 isSet:(BOOL*)arg2 ;
-(id<HMDBackingStoreObjectProtocol>)bsoDelegate;
-(void)setBsoDelegate:(id<HMDBackingStoreObjectProtocol>)arg1 ;
-(void)setBsoType:(NSString *)arg1 ;
-(CKRecord *)bsoRecord;
-(id)merge:(id)arg1 ;
@end

