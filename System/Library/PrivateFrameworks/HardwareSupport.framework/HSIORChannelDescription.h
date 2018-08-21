/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, Protocol;

@interface HSIORChannelDescription : NSObject <NSCopying> {

	NSString* _summary;
	NSString* _name;
	NSString* _groupName;
	NSString* _subGroupName;
	NSNumber* _identifier;
	NSString* _driverName;
	NSNumber* _driverIdentifier;
	Protocol* _reportingProtocol;

}

@property (nonatomic,retain) NSString * summary;                        //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * groupName;                      //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSString * subGroupName;                   //@synthesize subGroupName=_subGroupName - In the implementation block
@property (nonatomic,retain) NSNumber * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * driverName;                     //@synthesize driverName=_driverName - In the implementation block
@property (nonatomic,retain) NSNumber * driverIdentifier;               //@synthesize driverIdentifier=_driverIdentifier - In the implementation block
@property (nonatomic,retain) Protocol * reportingProtocol;              //@synthesize reportingProtocol=_reportingProtocol - In the implementation block
-(NSString *)summary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setSummary:(NSString *)arg1 ;
-(NSNumber *)driverIdentifier;
-(void)setDriverIdentifier:(NSNumber *)arg1 ;
-(void)setDriverName:(NSString *)arg1 ;
-(NSString *)driverName;
-(NSString *)subGroupName;
-(void)setSubGroupName:(NSString *)arg1 ;
-(Protocol *)reportingProtocol;
-(void)setReportingProtocol:(Protocol *)arg1 ;
-(BOOL)isEqualToChannelDescription:(id)arg1 ;
-(id)initWithIOReportChannelRef:(CFDictionaryRef)arg1 ;
@end

