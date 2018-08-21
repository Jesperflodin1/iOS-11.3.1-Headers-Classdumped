/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSUUID, NSMutableDictionary, NSString;

@interface HMDApplicationData : HMFObject <NSSecureCoding, NSCopying, HMFDumpState> {

	NSUUID* _parentUUID;
	NSUUID* _uuid;
	NSMutableDictionary* _appDataDictionary;

}

@property (nonatomic,retain) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appDataDictionary;              //@synthesize appDataDictionary=_appDataDictionary - In the implementation block
@property (nonatomic,retain) NSUUID * parentUUID;                                  //@synthesize parentUUID=_parentUUID - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)updateWithModel:(id)arg1 ;
-(NSUUID *)parentUUID;
-(id)dumpState;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(void)removeApplicationDataForIdentifier:(id)arg1 ;
-(id)initWithParentUUID:(id)arg1 ;
-(void)setApplicationData:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)appDataDictionary;
-(id)initWithDictionary:(id)arg1 parentUUID:(id)arg2 ;
-(id)applicationDataForIdentifier:(id)arg1 ;
-(void)setParentUUID:(NSUUID *)arg1 ;
-(void)updateParentUUIDIfNil:(id)arg1 ;
-(void)setAppDataDictionary:(NSMutableDictionary *)arg1 ;
@end

