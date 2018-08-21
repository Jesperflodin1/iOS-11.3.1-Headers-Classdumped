/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSDictionary, NSData;

@interface HMDHAPMetadataModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSNumber * metadataVersion; 
@property (nonatomic,retain) NSNumber * schemaVersion; 
@property (nonatomic,retain) NSDictionary * rawPlist; 
@property (nonatomic,retain) NSData * legacyIDSData; 
@property (nonatomic,retain) NSData * legacyCloudData; 
+(id)properties;
+(id)metadataModelObjectUUID;
+(id)modelWithDictionary:(id)arg1 ;
+(id)allowedTypes;
-(id)metadataDictionary;
@end

