/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, FCCKPIdentifier, FCCKPLocale;

@interface FCCKPRequestOperationHeader : PBCodable <NSCopying> {

	unsigned long long _applicationConfigVersion;
	unsigned long long _deviceFlowControlBudget;
	unsigned long long _deviceFlowControlBudgetCap;
	unsigned long long _deviceProtocolVersion;
	unsigned long long _globalConfigVersion;
	NSString* _applicationBundle;
	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	NSString* _applicationVersion;
	NSData* _clientChangeToken;
	NSString* _deviceAssignedName;
	NSString* _deviceFlowControlKey;
	float _deviceFlowControlRegeneration;
	NSString* _deviceHardwareID;
	NSString* _deviceHardwareVersion;
	FCCKPIdentifier* _deviceIdentifier;
	NSString* _deviceLibraryName;
	NSString* _deviceLibraryVersion;
	NSString* _deviceSoftwareVersion;
	int _isolationLevel;
	FCCKPLocale* _locale;
	NSString* _mmcsProtocolVersion;
	int _targetDatabase;
	NSString* _userIDContainerID;
	SCD_Struct_FC22 _has;

}

@property (nonatomic,readonly) BOOL hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                            //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundle; 
@property (nonatomic,retain) NSString * applicationBundle;                               //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationVersion; 
@property (nonatomic,retain) NSString * applicationVersion;                              //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationConfigVersion; 
@property (assign,nonatomic) unsigned long long applicationConfigVersion;                //@synthesize applicationConfigVersion=_applicationConfigVersion - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalConfigVersion; 
@property (assign,nonatomic) unsigned long long globalConfigVersion;                     //@synthesize globalConfigVersion=_globalConfigVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceIdentifier; 
@property (nonatomic,retain) FCCKPIdentifier * deviceIdentifier;                         //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSoftwareVersion; 
@property (nonatomic,retain) NSString * deviceSoftwareVersion;                           //@synthesize deviceSoftwareVersion=_deviceSoftwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHardwareVersion; 
@property (nonatomic,retain) NSString * deviceHardwareVersion;                           //@synthesize deviceHardwareVersion=_deviceHardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLibraryName; 
@property (nonatomic,retain) NSString * deviceLibraryName;                               //@synthesize deviceLibraryName=_deviceLibraryName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLibraryVersion; 
@property (nonatomic,retain) NSString * deviceLibraryVersion;                            //@synthesize deviceLibraryVersion=_deviceLibraryVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceFlowControlKey; 
@property (nonatomic,retain) NSString * deviceFlowControlKey;                            //@synthesize deviceFlowControlKey=_deviceFlowControlKey - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlBudget; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudget;                 //@synthesize deviceFlowControlBudget=_deviceFlowControlBudget - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlBudgetCap; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudgetCap;              //@synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFlowControlRegeneration; 
@property (assign,nonatomic) float deviceFlowControlRegeneration;                        //@synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceProtocolVersion; 
@property (assign,nonatomic) unsigned long long deviceProtocolVersion;                   //@synthesize deviceProtocolVersion=_deviceProtocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) FCCKPLocale * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasMmcsProtocolVersion; 
@property (nonatomic,retain) NSString * mmcsProtocolVersion;                             //@synthesize mmcsProtocolVersion=_mmcsProtocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                        //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                                 //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceAssignedName; 
@property (nonatomic,retain) NSString * deviceAssignedName;                              //@synthesize deviceAssignedName=_deviceAssignedName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHardwareID; 
@property (nonatomic,retain) NSString * deviceHardwareID;                                //@synthesize deviceHardwareID=_deviceHardwareID - In the implementation block
@property (assign,nonatomic) BOOL hasTargetDatabase; 
@property (assign,nonatomic) int targetDatabase;                                         //@synthesize targetDatabase=_targetDatabase - In the implementation block
@property (nonatomic,readonly) BOOL hasUserIDContainerID; 
@property (nonatomic,retain) NSString * userIDContainerID;                               //@synthesize userIDContainerID=_userIDContainerID - In the implementation block
@property (assign,nonatomic) BOOL hasIsolationLevel; 
@property (assign,nonatomic) int isolationLevel;                                         //@synthesize isolationLevel=_isolationLevel - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceIdentifier:(FCCKPIdentifier *)arg1 ;
-(BOOL)hasLocale;
-(NSString *)applicationVersion;
-(FCCKPIdentifier *)deviceIdentifier;
-(BOOL)hasDeviceIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(FCCKPLocale *)arg1 ;
-(id)dictionaryRepresentation;
-(FCCKPLocale *)locale;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)setApplicationBundle:(NSString *)arg1 ;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)setTargetDatabase:(int)arg1 ;
-(void)setDeviceHardwareVersion:(NSString *)arg1 ;
-(void)setDeviceSoftwareVersion:(NSString *)arg1 ;
-(void)setDeviceLibraryName:(NSString *)arg1 ;
-(void)setDeviceLibraryVersion:(NSString *)arg1 ;
-(void)setDeviceFlowControlKey:(NSString *)arg1 ;
-(void)setMmcsProtocolVersion:(NSString *)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(void)setDeviceAssignedName:(NSString *)arg1 ;
-(void)setDeviceHardwareID:(NSString *)arg1 ;
-(void)setUserIDContainerID:(NSString *)arg1 ;
-(BOOL)hasApplicationContainer;
-(BOOL)hasApplicationBundle;
-(BOOL)hasApplicationVersion;
-(void)setApplicationConfigVersion:(unsigned long long)arg1 ;
-(void)setHasApplicationConfigVersion:(BOOL)arg1 ;
-(BOOL)hasApplicationConfigVersion;
-(void)setGlobalConfigVersion:(unsigned long long)arg1 ;
-(void)setHasGlobalConfigVersion:(BOOL)arg1 ;
-(BOOL)hasGlobalConfigVersion;
-(BOOL)hasDeviceSoftwareVersion;
-(BOOL)hasDeviceHardwareVersion;
-(BOOL)hasDeviceLibraryName;
-(BOOL)hasDeviceLibraryVersion;
-(BOOL)hasDeviceFlowControlKey;
-(void)setDeviceFlowControlBudget:(unsigned long long)arg1 ;
-(void)setHasDeviceFlowControlBudget:(BOOL)arg1 ;
-(BOOL)hasDeviceFlowControlBudget;
-(void)setDeviceFlowControlBudgetCap:(unsigned long long)arg1 ;
-(void)setHasDeviceFlowControlBudgetCap:(BOOL)arg1 ;
-(BOOL)hasDeviceFlowControlBudgetCap;
-(void)setDeviceFlowControlRegeneration:(float)arg1 ;
-(void)setHasDeviceFlowControlRegeneration:(BOOL)arg1 ;
-(BOOL)hasDeviceFlowControlRegeneration;
-(void)setDeviceProtocolVersion:(unsigned long long)arg1 ;
-(void)setHasDeviceProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasDeviceProtocolVersion;
-(BOOL)hasMmcsProtocolVersion;
-(int)applicationContainerEnvironment;
-(void)setHasApplicationContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasApplicationContainerEnvironment;
-(BOOL)hasClientChangeToken;
-(BOOL)hasDeviceAssignedName;
-(BOOL)hasDeviceHardwareID;
-(int)targetDatabase;
-(void)setHasTargetDatabase:(BOOL)arg1 ;
-(BOOL)hasTargetDatabase;
-(BOOL)hasUserIDContainerID;
-(int)isolationLevel;
-(void)setIsolationLevel:(int)arg1 ;
-(void)setHasIsolationLevel:(BOOL)arg1 ;
-(BOOL)hasIsolationLevel;
-(NSString *)applicationContainer;
-(NSString *)applicationBundle;
-(unsigned long long)applicationConfigVersion;
-(unsigned long long)globalConfigVersion;
-(NSString *)deviceSoftwareVersion;
-(NSString *)deviceHardwareVersion;
-(NSString *)deviceLibraryName;
-(NSString *)deviceLibraryVersion;
-(NSString *)deviceFlowControlKey;
-(unsigned long long)deviceFlowControlBudget;
-(unsigned long long)deviceFlowControlBudgetCap;
-(float)deviceFlowControlRegeneration;
-(unsigned long long)deviceProtocolVersion;
-(NSString *)mmcsProtocolVersion;
-(NSData *)clientChangeToken;
-(NSString *)deviceAssignedName;
-(NSString *)deviceHardwareID;
-(NSString *)userIDContainerID;
@end

